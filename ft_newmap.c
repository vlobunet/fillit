
#include "libft.h"

t_mapp	*ft_newmap(int size)
{
	t_mapp	*mapp;
	int		i;
	int		j;

	i = 0;
	mapp = (t_mapp *)ft_memalloc(sizeof(t_mapp));
	mapp->size = size;
	mapp->array = (char **)ft_memalloc(sizeof(char *) * size);
	while (i < size)
	{
		mapp->array[i] = ft_strnew(size);
		j = 0;
		while (j < size)
			mapp->array[i][j++] = '.';
		i++;
	}
	return (mapp);
}