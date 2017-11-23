
#include "libft.h"

void	ft_printm(t_mapp *mapp)
{
	int i;

	i = 0;
	while (i < mapp->size)
	{	
		ft_putstr(mapp->array[i++]);
		ft_putchar('\n');
	}
}
