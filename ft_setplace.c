#include "libft.h"

void	ft_setplace(t_block *block, t_mapp *mapp, t_tetra *tetra, char c)
{
	int i;
	int j;

	i = 0;
	while (i < block->w)
	{
		j = 0;
		while (j < block->h)
		{
			if (block->src[j][i] == '#')
				mapp->array[tetra->y + j][tetra->x + i] = c;
			j++;
		}
		i++;
	}
	ft_memdel((void **)&tetra);
}
