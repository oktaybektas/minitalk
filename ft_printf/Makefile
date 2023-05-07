# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile kopyası                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 22:10:57 by obektas           #+#    #+#              #
#    Updated: 2022/11/20 01:03:39 by obektas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o

clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
