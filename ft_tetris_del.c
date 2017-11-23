#include "libft.h"

void		ft_tetris_del(t_block *block)
{
	int i;

	i = 0;
	while (i < block->h)
	{
		ft_memdel((void **)(&(block->src[i])));
		i++;
	}
	ft_memdel((void **)(&(block->src)));
	ft_memdel((void **)&block);
}