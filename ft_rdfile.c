
#include "libft.h"

t_list	*ft_rdfile(int fd)
{
	char	*str;
	int		c;
	t_list	*list;
	char	letter;
	t_block	*block;

	letter = 'A';
	str = ft_strnew(21);
	list = NULL;
	while ((c = read(fd, str, 21)) >= 20)
	{
		block = ft_getminsq(str, letter++); 
		if (ft_chters(str, c) == 0 || block == NULL)
		{
			ft_memdel((void **)&str);
			return (ft_dellaylst(list));
		}
		ft_lstadd(&list, ft_lstnew(block, sizeof(t_block)));
		ft_memdel((void **)&block);
	}
	ft_memdel((void **)&str);
	if (c != 0) 
		return (ft_dellaylst(list));
	ft_lstrev(&list);
	return (list);
}
