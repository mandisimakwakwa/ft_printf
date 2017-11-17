# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/03 14:44:02 by mmakwakw          #+#    #+#              #
#    Updated: 2017/01/03 15:39:32 by mmakwakw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

PATH_SRC = ./
PATH_LIB = ./libft/

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./include/

OBJ = ft_printf.o \
      ft_mod.o \
	  ft_param.o \
	  ft_flags.o \
	  ft_width.o \
	  ft_precision.o \
	  ft_length.o \
	  ft_specifType.o \
	  ft_specifType2.o \
	  ft_support.o \
	  $(PATH_LIB)ft_atoi.o \
	  $(PATH_LIB)ft_bzero.o \
	  $(PATH_LIB)ft_isalnum.o \
	  $(PATH_LIB)ft_isalpha.o \
	  $(PATH_LIB)ft_isascii.o \
	  $(PATH_LIB)ft_isdigit.o \
	  $(PATH_LIB)ft_isesc.o \
	  $(PATH_LIB)ft_ishex.o \
	  $(PATH_LIB)ft_islower.o \
	  $(PATH_LIB)ft_isprint.o \
	  $(PATH_LIB)ft_isupper.o \
	  $(PATH_LIB)ft_memalloc.o \
	  $(PATH_LIB)ft_memccpy.o \
	  $(PATH_LIB)ft_memchr.o \
	  $(PATH_LIB)ft_memcmp.o \
	  $(PATH_LIB)ft_memcpy.o \
	  $(PATH_LIB)ft_memdel.o \
	  $(PATH_LIB)ft_memmove.o \
	  $(PATH_LIB)ft_memset.o \
	  $(PATH_LIB)ft_putchar.o \
	  $(PATH_LIB)ft_putendl.o \
	  $(PATH_LIB)ft_putchar_fd.o \
	  $(PATH_LIB)ft_putendl_fd.o \
	  $(PATH_LIB)ft_putnbr.o \
	  $(PATH_LIB)ft_putnbr_fd.o \
	  $(PATH_LIB)ft_putstr.o \
	  $(PATH_LIB)ft_putstr_fd.o \
	  $(PATH_LIB)ft_strcat.o \
	  $(PATH_LIB)ft_strchr.o \
	  $(PATH_LIB)ft_strclr.o \
	  $(PATH_LIB)ft_strcmp.o \
	  $(PATH_LIB)ft_strcpy.o \
	  $(PATH_LIB)ft_strdel.o \
	  $(PATH_LIB)ft_strdup.o \
	  $(PATH_LIB)ft_strequ.o \
	  $(PATH_LIB)ft_striter.o \
	  $(PATH_LIB)ft_striteri.o \
	  $(PATH_LIB)ft_strjoin.o \
	  $(PATH_LIB)ft_strlcat.o \
	  $(PATH_LIB)ft_strlen.o \
	  $(PATH_LIB)ft_strmap.o \
	  $(PATH_LIB)ft_strmapi.o \
	  $(PATH_LIB)ft_strncat.o \
	  $(PATH_LIB)ft_strncmp.o \
	  $(PATH_LIB)ft_strncpy.o \
	  $(PATH_LIB)ft_strnequ.o \
	  $(PATH_LIB)ft_strnew.o \
	  $(PATH_LIB)ft_strnstr.o \
	  $(PATH_LIB)ft_strrchr.o \
	  $(PATH_LIB)ft_strrev.o \
	  $(PATH_LIB)ft_strsplit.o \
	  $(PATH_LIB)ft_strstr.o \
	  $(PATH_LIB)ft_strsub.o \
	  $(PATH_LIB)ft_strtrim.o \
	  $(PATH_LIB)ft_tolower.o \
	  $(PATH_LIB)ft_toupper.o \
	  $(PATH_LIB)ft_strbchr.o \
	  $(PATH_LIB)ft_chrpos.o \
	  $(PATH_LIB)ft_putchar_endl.o \
	  $(PATH_LIB)ft_putnbr_endl.o \
	  $(PATH_LIB)ft_puthex.o \
	  $(PATH_LIB)ft_nbrlen.o \
	  $(PATH_LIB)ft_puthex_pf.o \
	  $(PATH_LIB)ft_putoctal.o \
	  $(PATH_LIB)ft_putunsigned.o \
	  $(PATH_LIB)ft_wchrlen.o \
	  $(PATH_LIB)ft_wchrstr.o

SRC = $(patsubst %.o, %.c, $(OBJ));

all: $(NAME)

$(NAME): $(OBJ)
		 ar rc $(NAME) $(OBJ)
		 @echo ""
		 ranlib $(NAME)
		 @echo ""

clean:
	rm -f $(OBJ)
	rm -f main.o

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc -c main.c -I ./libft/
	gcc -o test main.o $(NAME)
	rm -f $(OBJ)

tclean:
	rm -f test
	rm -f main.o

retest: tclean test

.PHONY: all clean fclean re test tclean retest
