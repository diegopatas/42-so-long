# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 16:55:57 by ddiniz            #+#    #+#              #
#    Updated: 2022/08/11 17:02:37 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long

all:
	gcc -Wall -Wextra -Werror -g3 main.c -I./includes -lmlx -lXext -lX11 -o $(NAME)

run: all
	./$(NAME)

leak: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./$(NAME)

verify:
	gcc -Wall -Wextra -Werror -g3 main_verify.c -I./includes -lmlx -lXext -lX11 -o $(NAME)

clean:
	rm -rf so_long

fclean: clean
	rm -rf $(NAME)
