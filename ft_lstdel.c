/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 14:15:20 by vlobunet          #+#    #+#             */
/*   Updated: 2017/10/31 14:15:22 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
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
