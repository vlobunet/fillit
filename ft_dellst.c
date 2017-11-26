/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:51:23 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:51:25 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_tetramindel(t_block *str)
{
	int	y;

	y = 0;
	while (y < str->h)
	{
		ft_memdel((void **)(&(str->src[y])));
		y++;
	}
	ft_memdel((void **)(&(str->src)));
	ft_memdel((void **)&str);
}

t_list		*ft_dellst(t_list *str)
{
	t_block	*tetris;
	t_list	*next;

	while (str)
	{
		tetris = (t_block *)str->content;
		next = str->next;
		ft_tetramindel(tetris);
		ft_memdel((void **)&str);
		str = next;
	}
	return (NULL);
}
