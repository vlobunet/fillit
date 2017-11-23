
#include "libft.h"

void	ft_dellaymapp(t_mapp *mapp)
{
	int i;

	i = 0;
	while (i < mapp->size)
	{
		ft_memdel((void **)&(mapp->array[i]));
		i++;
	}
	ft_memdel((void **)&(mapp->array));
	ft_memdel((void **)&mapp);
}