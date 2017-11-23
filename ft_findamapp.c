
#include "libft.h"

int		ft_findamapp(t_mapp *mapp, t_list *list)
{
	t_block	*block;
	int		x;
	int		y;

	y = 0;
	if (list == NULL)
		return(1);
	// usleep(1);
	// system("clear");
	// ft_printm(mapp);
	// printf("\n");
	// printf("%d\n", coll);
	coll++;
	block = (t_block *)(list->content);
	while (y < mapp->size - block->h + 1)
	{
		x = 0;
		while (x < mapp->size - block->w + 1)
		{
			if (ft_place(block, mapp, x, y))
			{
				if (ft_findamapp(mapp, list->next))
					return (1);
				else
					ft_setplace(block, mapp, ft_newp(x, y), '.');
			}
			x++;
		}
		y++;
	}
	return (0);
}
