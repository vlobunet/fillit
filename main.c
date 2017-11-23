#include "libft.h"

int		main(int c, char **v)
{
	t_list	*list;
	t_mapp	*mapp;
	coll = 0;
	if (c != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	list = ft_rdfile(open(v[1], O_RDONLY));
	if (list == NULL)
	{
		ft_putstr("error\n");
		return (1);
	}
	mapp = ft_spot(list);
	ft_printm(mapp);
	//printf("%d\n", coll);
	return (0);
}
