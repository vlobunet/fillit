/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:53:29 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:53:29 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_freelist(t_list *list)
{
	t_block	*block;
	t_list	*next;
	int		i;

	i = 0;
	while (list)
	{
		block = (t_block *)list->content;
		next = list->next;
		ft_tetris_del(block);
		ft_memdel((void **)&list);
		list = next;
	}
	return (NULL);
}
