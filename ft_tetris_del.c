/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetris_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:08:15 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:08:16 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tetris_del(t_block *block)
{
	int i;

	i = 0;
	while (i < block->h)
	{
		ft_memdel((void **)(&(block->src[i])));
		i++;
	}
	ft_memdel((void **)(&(block->src)));
	ft_memdel((void **)&block);
}
