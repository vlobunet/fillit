
#include "libft.h"

t_block		*ft_tetris_new(char **src, int w, int h, char sumb)
{
	t_block		*tetramin;

	tetramin = ft_memalloc(sizeof(t_block));
	if (tetramin == NULL)
		return (NULL);
	tetramin->src = src;
	tetramin->w = w;
	tetramin->h = h;
	tetramin->sumb = sumb;
	return (tetramin);
}