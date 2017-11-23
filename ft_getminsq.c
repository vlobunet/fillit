#include "libft.h"

t_block *ft_getminsq(char *str, char sumb)
{
	t_tetra		*min;
	t_tetra		*max;
	char		**src;
	int			a, i, h, w;
	t_block		*tetramin;

	min = ft_newp(2, 2);
	max = ft_newp(0, 0);
	ft_minmax(str, min, max);
	h = max->y - min->y + 1;
	w = max->x - min->x + 1;
	src = ft_memalloc(sizeof(char *) * h);
	i = 0;
	while (i < h)
	{
		src[i] = ft_strnew(w);
		ft_strncpy(src[i], str + (min->x) + (i + min->y) * 5, w);
		i++;
	}
	tetramin = ft_tetris_new(src, w, h, sumb);
	ft_memdel((void **)&min);
	ft_memdel((void **)&max);
	return (tetramin);
}