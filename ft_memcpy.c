/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:17:55 by vlobunet          #+#    #+#             */
/*   Updated: 2017/10/24 15:18:02 by vlobunet         ###   ########.fr       */
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
