# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 17:00:57 by obektas           #+#    #+#              #
#    Updated: 2023/02/15 17:20:44 by obektas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
SRCLIENT =   client.c
OBJSCLIENT = $(SRCLIENT:.c=.o)

SRCSERVER = server.c
OBJSERVER = $(SRCSERVER:.c=.o)
CC	= gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ./ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJSERVER) $(OBJSCLIENT)
	@make -C ./ft_printf
	$(CC) -o server $(SRCSERVER) $(CFLAGS) $(LIB)
	$(CC) -o client $(SRCLIENT) $(CFLAGS) $(LIB)

clean:
	rm -f $(OBJSERVER) $(OBJSCLIENT)
	rm -f ./ft_printf/*.o

fclean: clean
	rm -f server client
	rm -f ./ft_printf/*.o ./ft_printf/*.a

re: fclean all

.PHONY: all clean fclean re
