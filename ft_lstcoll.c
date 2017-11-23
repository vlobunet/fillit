
#include "libft.h"

size_t	ft_sqrt(t_list *lst)
{
	size_t i;
	int size;

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
