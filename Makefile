# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 12:04:35 by asolano-          #+#    #+#              #
#    Updated: 2022/05/18 08:56:21 by asolano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES = libftprintf.h
SRCS = src/ft_printf.c \
	   src/ft_print_str.c \
	   src/ft_print_char.c \
	   src/ft_print_hex.c \
	   src/ft_print_percent.c \
	   src/ft_print_nbr.c \
	   src/ft_print_ptr.c \
	   src/ft_print_unsigned.c \
	   src/ft_uitoa.c
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -I include/ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/ all
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

.PHONY: clean

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean
