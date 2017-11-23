

#include "libft.h"

t_list		*ft_dellaylst(t_list *str)
{
	t_block	*tetris;
	t_list	*next;

	while (str)
	{
		tetris = (t_block *)str->content;
		next = str->next;
		ft_dellaytetramin(tetris);
		ft_memdel((void **)&str);
		str = next;
	}
	return (NULL);
}