
#include "libft.h"

int		ft_place(t_block *block, t_mapp *mapp, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < block->w)
	{
		j = 0;
		while (j < block->h)
		{
			if (block->src[j][i] == '#' && mapp->array[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	ft_setplace(block, mapp, ft_newp(x, y), block->sumb);
	return (1);
}