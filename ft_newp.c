#include "libft.h"

t_tetra		*ft_newp(int x, int y)
{
	t_tetra	*p;

	p = ft_memalloc(sizeof(t_tetra));
	p->x = x;
	p->y = y;
	return (p);
}
