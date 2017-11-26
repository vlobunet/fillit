/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:03:17 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:03:17 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_place(t_block *block, t_map *map, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < block->w)
	{
		j = 0;
		while (j < block->h)
		{
			if (block->src[j][i] == '#' && map->src[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	ft_setplace(block, map, ft_newp(x, y), block->sumb);
	return (1);
}
