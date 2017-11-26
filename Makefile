# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akorzhak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/23 20:03:06 by akorzhak          #+#    #+#              #
#    Updated: 2017/11/23 20:03:08 by akorzhak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc
CFLAG = -Wall -Wextra -Werror
NAME = fillit
OBJ = ft_bzero.o ft_memcpy.o ft_putstr.o ft_strnew.o ft_memalloc.o\
ft_strncpy.o ft_memdel.o ft_lstadd.o ft_putchar.o\
ft_dellst.o ft_tetris_new.o ft_newp.o ft_minmax.o ft_getminsq.o\
ft_isvalid.o ft_rdfile.o ft_lstnew.o\
ft_freelist.o ft_tetris_del.o ft_lstrev.o ft_size.o ft_mapcreate.o\
ft_newmap.o ft_mapdel.o ft_findamap.o ft_place.o ft_setplace.o\
ft_printm.o main.o
INCLUDE = libft.h

.PHONY: all clean fclean re
# правило, применимое ко всем файлам с расширением .o 
# .o файлы зависят от .c версии файлов и INCLUDE.
# автоматическая переменная $< - имя предпосылки
# (файла, необходимого как условие)(с расширением .c)
%.o: %.c $(INCLUDE)
	$(C) $(CFLAG) -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(CFLAG) $(OBJ)
clean:
	/bin/rm -f $(OBJ) *~ 
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
