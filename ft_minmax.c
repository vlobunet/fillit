#include "libft.h"

void	ft_minmax(char *str, t_tetra *min, t_tetra *max)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			(i / 5 < min->y)?(min->y = i / 5):0;
			(i / 5 > max->y)?(max->y = i / 5):0;
			(i % 5 < min->x)?(min->x = i % 5):0;
			(i % 5 > max->x)?(max->x = i % 5):0;
		}
		i++;
	}
}