# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkristle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 18:45:17 by bkristle          #+#    #+#              #
#    Updated: 2019/04/05 18:45:25 by bkristle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = *.c

HEADER = head.h

all: display

display:
		gcc -c $(SRC) $(HEADER)
		gcc -o $(NAME) *.o

clean:
		rm -rf *.o head.h.gch

fclean:
		rm -f $(NAME)

re:
		fclean all
