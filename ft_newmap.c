/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:02:31 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:02:32 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_map	*ft_newmap(int size)
{
	t_map	*map;
	int		i;
	int		j;

	i = 0;
	map = (t_map *)ft_memalloc(sizeof(t_map));
	map->size = size;
	map->src = (char **)ft_memalloc(sizeof(char *) * size);
	while (i < size)
	{
		map->src[i] = ft_strnew(size);
		j = 0;
		while (j < size)
			map->src[i][j++] = '.';
		i++;
	}
	return (map);
}
