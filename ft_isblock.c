#include "libft.h"

int		ft_isblock(char *str)
{
	int	i;
	int block;

	i = 0;
	block = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			((i - 5) >= 0 && str[i - 5] == '#')?(block++):0;
			((i + 1) < 20 && str[i + 1] == '#')?(block++):0;
			((i + 5) < 20 && str[i + 5] == '#')?(block++):0;
			((i - 1) >= 0 && str[i - 1] == '#')?(block++):0;
		}
		i++;
	}
	if (block == 6 || block == 8)
		return (1);
	else
		return (0);
}