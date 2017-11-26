/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:59:16 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:59:18 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*str;

	str = (t_list *)ft_memalloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	if (content == NULL)
	{
		str->content = NULL;
		content_size = 0;
	}
	else
	{
		str->content = ft_memalloc(content_size);
		if (str->content == NULL)
		{
			ft_memdel((void **)&str);
			return (NULL);
		}
		ft_memcpy(str->content, content, content_size);
	}
	str->content_size = content_size;
	str->next = NULL;
	return (str);
}
