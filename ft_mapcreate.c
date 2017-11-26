/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:06:24 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:06:25 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_map	*ft_mapcreate(t_list *list)
{
	t_map	*map;
	int		size;

	size = ft_size(list);
	map = ft_newmap(size);
	while (!ft_findamap(map, list))
	{
		ft_mapdel(map);
		map = ft_newmap(++size);
	}
	return (map);
}
