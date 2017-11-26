/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:49:08 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:49:10 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iscontiguous(char *str)
{
	int	i;
	int	block;

	i = 0;
	block = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			((i - 5) >= 0 && str[i - 5] == '#') ? (block++) : 0;
			((i + 1) < 20 && str[i + 1] == '#') ? (block++) : 0;
			((i + 5) < 20 && str[i + 5] == '#') ? (block++) : 0;
			((i - 1) >= 0 && str[i - 1] == '#') ? (block++) : 0;
		}
		i++;
	}
	if (block == 6 || block == 8)
		return (1);
	else
		return (0);
}

int			ft_isvalid(char *str, int c)
{
	int	i;
	int	col;

	i = 0;
	col = 0;
	while (i < 20)
	{
		if (i % 5 < 4)
		{
			if (str[i] != '#' && str[i] != '.')
				return (0);
			if (str[i] == '#' && ++col > 4)
				return (0);
		}
		else if (str[i] != '\n')
			return (0);
		i++;
	}
	if (c == 21 && str[20] != '\n')
		return (0);
	return (ft_iscontiguous(str));
}
