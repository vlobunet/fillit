/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:58:03 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:58:04 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (*alst == NULL)
		return ;
	if (alst == NULL)
		return ;
	if (del != NULL)
		del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*s1;
	t_list	*s2;

	if (alst == NULL)
		return ;
	s2 = *alst;
	while (s2 != NULL)
	{
		s1 = s2->next;
		ft_lstdelone(&s2, del);
		s2 = s1;
	}
	*alst = NULL;
}
