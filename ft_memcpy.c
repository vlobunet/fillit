/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:00:58 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 14:00:58 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstnew;
	const char	*srcnew;

	dstnew = dst;
	srcnew = src;
	while (n > 0)
	{
		*dstnew++ = *srcnew++;
		n = n - 1;
	}
	return (dst);
}
