# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkristle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 18:21:21 by bkristle          #+#    #+#              #
#    Updated: 2019/04/05 18:21:39 by bkristle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

CFLAGS = -c -Wall -Werror -Wextra

NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER = includes

all: library

library: 
		$(CC) $(CFLAGS) $(SOURCES) -I$(HEADER)
		ar rc $(NAME) *.o
		ranlib $(NAME)

clean:
		rm -rf *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
