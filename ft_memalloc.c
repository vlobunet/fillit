/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:00:30 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:00:31 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *arr;

	if ((arr = (void*)malloc(sizeof(void) * size)) == NULL)
		return (NULL);
	ft_bzero(arr, size);
	return (arr);
}
