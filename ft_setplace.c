/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setplace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:06:05 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:06:07 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_setplace(t_block *block, t_map *map, t_tetra *tetra, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < block->w)
	{
		j = 0;
		while (j < block->h)
		{
			if (block->src[j][i] == '#')
				map->src[tetra->y + j][tetra->x + i] = c;
			j++;
		}
		i++;
	}
	ft_memdel((void **)&tetra);
}
