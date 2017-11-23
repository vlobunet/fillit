#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_tetra
{
	int				x;
	int				y;
}					t_tetra;

typedef struct		s_block
{
	char			**src;
	int				w;
	int				h;
	char			sumb;
}					t_block;

typedef struct	s_mapp
{
	int			size;
	char		**array;
}				t_mapp;

int coll;

void				ft_putstr(char const *s);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *memptr, int val, size_t num);
char				*ft_strncpy(char *dest, const char *src, size_t n);
void				ft_memdel(void **ap);
t_list				*ft_dellaylst(t_list *str);
t_block				*ft_tetris_new(char **src, int w, int h, char sumb);
t_tetra				*ft_newp(int x, int y);
void				ft_minmax(char *str, t_tetra *min, t_tetra *max);
t_block 			*ft_getminsq(char *str, char sumb);
int					ft_isblock(char *str);
int					ft_chters(char *str, int c);
t_list				*ft_rdfile(int fd);
void				ft_dellaytetramin(t_block *str);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				*ft_memcpy(void *dst, const void *src, size_t n);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_freelist(t_list *list);
void				ft_tetris_del(t_block *block);
void				ft_lstrev(t_list **alst);
size_t				ft_sqrt(t_list *lst);
t_mapp				*ft_spot(t_list *list);
t_mapp				*ft_newmap(int size);
void				ft_dellaymapp(t_mapp *mapp);
int					ft_findamapp(t_mapp *mapp, t_list *list);
int					ft_place(t_block *block, t_mapp *mapp, int x, int y);
void				ft_setplace(t_block *block, t_mapp *mapp, t_tetra *tetra, char c);
void				ft_printm(t_mapp *mapp);
void				ft_putstr(char const *s);
void	            ft_putchar(char s);
int		main(int c, char **v);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
#endif
