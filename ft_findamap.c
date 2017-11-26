/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findamap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:52:42 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:52:44 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findamap(t_map *map, t_list *list)
{
	t_block	*block;
	int		x;
	int		y;

	y = 0;
	if (list == NULL)
		return (1);
	block = (t_block *)(list->content);
	while (y < map->size - block->h + 1)
	{
		x = 0;
		while (x < map->size - block->w + 1)
		{
			if (ft_place(block, map, x, y))
			{
				if (ft_findamap(map, list->next))
					return (1);
				else
					ft_setplace(block, map, ft_newp(x, y), '.');
			}
			x++;
		}
		y++;
	}
	return (0);
}
