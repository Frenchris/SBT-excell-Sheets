# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chfremon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 23:51:27 by chfremon          #+#    #+#              #
#    Updated: 2018/09/19 13:04:47 by chfremon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c 
TMP = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o

CC = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) -c $(SRC) -I ./includes
	ar rc $(NAME) $(TMP)
	ranlib $(NAME)


clean:
	rm -f $(TMP)
fclean: clean 
	rm -f $(NAME)

re: fclean all
