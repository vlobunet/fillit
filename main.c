/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:09:02 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:09:04 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int c, char **v)
{
	t_list	*list;
	t_map	*map;

	if (c != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	list = ft_rdfile(open(v[1], O_RDONLY));
	if (list == NULL)
	{
		ft_putstr("error\n");
		return (1);
	}
	map = ft_mapcreate(list);
	ft_printm(map);
	return (0);
}
