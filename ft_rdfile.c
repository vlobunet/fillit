/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:05:40 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:05:41 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_rdfile(int fd)
{
	char	*str;
	int		c[2];
	t_list	*list;
	char	letter;
	t_block	*block;

	letter = 'A';
	str = ft_strnew(21);
	list = NULL;
	while ((c[0] = read(fd, str, 21)) >= 20)
	{
		block = ft_getminsq(str, letter++);
		if ((c[1] = c[0]) && (ft_isvalid(str, c[0]) == 0 || block == NULL))
		{
			ft_memdel((void **)&str);
			return (ft_dellst(list));
		}
		ft_lstadd(&list, ft_lstnew(block, sizeof(t_block)));
		ft_memdel((void **)&block);
	}
	ft_memdel((void **)&str);
	if ((c[0] == 0 && c[1] == 21) || (c[0] != 0))
		return (ft_dellst(list));
	ft_lstrev(&list);
	return (list);
}
