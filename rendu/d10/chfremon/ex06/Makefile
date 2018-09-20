# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chfremon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/20 00:27:04 by chfremon          #+#    #+#              #
#    Updated: 2018/09/20 14:27:14 by chfremon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/main.c \
	  srcs/ft_atoi.c \
	  srcs/ft_putchar.c \
	  srcs/operations.c \
	  srcs/ft_putnbr.c

CC = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) -I ./includes

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all
