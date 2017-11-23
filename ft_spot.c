
#include "libft.h"

t_mapp	*ft_spot(t_list *list)
{
	t_mapp	*mapp;
	int		size;

	size = ft_sqrt(list); 
	mapp = ft_newmap(size);
	while (!ft_findamapp(mapp, list))
	{
		ft_dellaymapp(mapp);
		mapp = ft_newmap(++size);
	}
	return (mapp);
}