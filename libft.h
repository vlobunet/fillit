/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:48:32 by vlobunet          #+#    #+#             */
/*   Updated: 2017/11/24 13:48:34 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
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

typedef struct		s_map
{
	int				size;
	char			**src;
}					t_map;

void				ft_putstr(char const *s);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
void				ft_bzero(void *s, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
void				ft_memdel(void **ap);
t_list				*ft_dellst(t_list *str);
t_block				*ft_tetris_new(char **src, int w, int h, char sumb);
t_tetra				*ft_newp(int x, int y);
void				ft_minmax(char *str, t_tetra *min, t_tetra *max);
t_block				*ft_getminsq(char *str, char sumb);
int					ft_isvalid(char *str, int c);
t_list				*ft_rdfile(int fd);
void				ft_lstadd(t_list **alst, t_list *new);
void				*ft_memcpy(void *dst, const void *src, size_t n);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_freelist(t_list *list);
void				ft_tetris_del(t_block *block);
void				ft_lstrev(t_list **alst);
size_t				ft_size(t_list *lst);
t_map				*ft_mapcreate(t_list *list);
t_map				*ft_newmap(int size);
void				ft_mapdel(t_map *map);
int					ft_place(t_block *block, t_map *map, int x, int y);
void				ft_printm(t_map *map);
void				ft_putstr(char const *s);
void				ft_putchar(char s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_setplace(t_block *block, t_map *map,
	t_tetra *tetra, char c);
int					ft_findamap(t_map *map, t_list *list);

#endif
