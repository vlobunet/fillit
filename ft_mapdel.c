/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:51:58 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:51:59 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mapdel(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->size)
	{
		ft_memdel((void **)&(map->src[i]));
		i++;
	}
	ft_memdel((void **)&(map->src));
	ft_memdel((void **)&map);
}
