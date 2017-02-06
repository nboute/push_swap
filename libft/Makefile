# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 16:19:54 by nboute            #+#    #+#              #
#    Updated: 2017/02/04 19:04:40 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: make all clean fclean re

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_getnbr.c \
	   ft_getnbr_base.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isblank.c \
	   ft_isdigit.c \
	   ft_islower.c \
	   ft_isprint.c \
	   ft_isupper.c \
	   ft_itoa.c \
	   ft_itoa_base.c \
	   ft_lstadd.c \
	   ft_lst_last.c \
	   ft_lstdel.c \
	   ft_lstdelone.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_lstrcat.c \
	   ft_lstrdup.c \
	   ft_map.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memdel.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_memswap.c \
	   ft_numdigits.c \
	   ft_numdigits_base.c \
	   ft_power.c \
	   ft_putchar.c \
	   ft_putchar_fd.c \
	   ft_putcstr.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_putnchar.c \
	   ft_putstr.c \
	   ft_putstrn.c \
	   ft_putstr_fd.c \
	   ft_sqrt.c \
	   ft_strany.c \
	   ft_strcat.c \
	   ft_strccpy.c \
	   ft_strcdup.c \
	   ft_strchr.c \
	   ft_strclen.c \
	   ft_strclr.c \
	   ft_strcmp.c \
	   ft_strcn.c \
	   ft_strcpy.c \
	   ft_strcpy_free.c \
	   ft_strdel.c \
	   ft_strdup.c \
	   ft_strdup_free.c \
	   ft_strequ.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strjoin_free.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strndup.c \
	   ft_strnequ.c \
	   ft_strnew.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strsplit.c \
	   ft_strstr.c \
	   ft_strsub.c \
	   ft_strtolower.c \
	   ft_strtrim.c \
	   ft_tabdel.c \
	   ft_tablen.c \
	   ft_tabnew.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_utoa.c \
	   ft_utoa_base.c \
	   ft_wchartlen.c \
	   get_next_line.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ) : $(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
