/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:55:40 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:55:41 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(t_list *lst)
{
	size_t	i;
	size_t	size;

	size = 2;
	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	while (size * size < i * 4)
		size++;
	return (size);
}
