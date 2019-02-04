# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroblin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/22 09:35:38 by aroblin           #+#    #+#              #
#    Updated: 2018/12/16 17:39:49 by aroblin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen_1.c ft_strjoin_free_1.c ft_strlen_to.c ft_strdup_free.c ft_strsub_free.c ft_lst_new.c ft_lst_add_end.c\
		ft_abs.c ft_strjoin_add.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	  ft_isprint.c ft_memalloc.c ft_memccpy.c ft_memcpy.c ft_memdel.c ft_memset.c\
	  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c\
	  ft_putnbrndl.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c\
	  ft_strcmp.c ft_count_words.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c\
	  ft_striteri.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c\
	  ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strstr.c\
	  ft_strsub.c ft_itoa_unsigned_short.c ft_empty_list.c ft_tolower.c ft_toupper.c ft_itoa.c ft_memchr.c ft_memcmp.c\
	  ft_memmove.c ft_strjoin_add_free.c ft_strfind.c ft_strjoin.c ft_strlcat.c ft_strsplit.c ft_strtrim.c\
	  ft_lstnew.c  ft_lstdelone.c ft_lstdel.c ft_strpos.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstsup.c\
	  ft_foreach.c ft_is_prime.c ft_range.c ft_sqrt.c ft_strjoin_free.c ft_strjoin_free_s1.c \
	  ft_strjoin_free_s2.c get_next_line.c gnl.c ft_lstlen.c ft_tab_strlen.c ft_strdup_of.c ft_strdup_to.c\
	  ft_strlen_end.c\

FLAGS = -Wall -Wextra -Werror
INC = libft.h

OBJ = $(SRC:.c=.o)

.PHONY : all clean fclean re

CC = gcc -c
AR = ar -rc

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC)
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
