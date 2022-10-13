# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 17:32:02 by ddiniz            #+#    #+#              #
#    Updated: 2022/10/13 17:53:50 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Werror -Wextra

SRCS	= ft_printf.c ft_strlen.c ft_strchr.c check_char.c ft_itoag.c \
			print_char.c print_str.c print_nbr.c print_hex.c print_ptr.c \
			print_base.c

OBJS	= $(SRCS:%.c=%.o)

INCLUDES= ft_printf.h
NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	ar -rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
