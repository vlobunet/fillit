
#include "libft.h"

int		ft_chters(char *str, int c)
{
	int	i;
	int	col;

	i = 0;
	col = 0;
	while (i < 20)
	{
		if (i % 5 < 4)
		{	
			if (str[i] != '#' && str[i] != '.')
				return (0);
			if (str[i] == '#' && ++col > 4)
				return (0);
		}
		else if (str[i] != '\n')
			return (0);
		i++;
	}
	if (c == 21 && str[20] != '\n')
		return (0);
	return (ft_isblock(str));
}