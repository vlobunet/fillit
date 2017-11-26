/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getminsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:53:54 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:53:56 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** mas[0] -> w;
** mas[1] -> h;
** mas[2] -> i;
*/

#include "libft.h"

t_block	*ft_getminsq(char *str, char sumb)
{
	t_tetra		*min;
	t_tetra		*max;
	char		**src;
	int			mas[3];
	t_block		*tetramin;

	min = ft_newp(3, 3);
	max = ft_newp(0, 0);
	ft_minmax(str, min, max);
	mas[1] = max->y - min->y + 1;
	mas[0] = max->x - min->x + 1;
	src = ft_memalloc(sizeof(char *) * mas[1]);
	mas[2] = 0;
	while (mas[2] < mas[1])
	{
		src[mas[2]] = ft_strnew(mas[0]);
		ft_strncpy(src[mas[2]], str + (min->x) + (mas[2] + min->y) * 5, mas[0]);
		mas[2]++;
	}
	tetramin = ft_tetris_new(src, mas[0], mas[1], sumb);
	ft_memdel((void **)&min);
	ft_memdel((void **)&max);
	return (tetramin);
}
