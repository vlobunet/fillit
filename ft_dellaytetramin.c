
#include "libft.h"

void		ft_dellaytetramin(t_block *str)
{
	int y;

	y = 0;
	while (y < str->h)
	{
		ft_memdel((void **)(&(str->src[y])));
		y++;
	}
	ft_memdel((void **)(&(str->src)));
	ft_memdel((void **)&str);
}