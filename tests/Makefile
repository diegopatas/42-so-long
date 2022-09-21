# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 00:07:56 by ddiniz            #+#    #+#              #
#    Updated: 2022/09/21 17:41:39 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LINKER			= gcc
COMPILER		= $(LINKER) -c

REMOVE			= rm
REMOVE_FORCE	= $(REMOVE) -rf

FLAGS_MLX		+= -lmlx -lXext -lX11

PATH_ROOT		= ..
PATH_UNITY		= unity/src
PATH_FIXTURE	= unity/extras/fixture/src
PATH_MEMORY		= unity/extras/memory/src
PATH_PROJECT	= $(PATH_ROOT)/includes

UNITY_SOURCE	= $(PATH_UNITY)/unity.c
UNITY_FIXTURE	= $(PATH_FIXTURE)/unity_fixture.c

INCLUDES		= -I. -I$(PATH_UNITY) -I$(PATH_FIXTURE) -I$(PATH_MEMORY) \
				  -I$(PATH_PROJECT) -I../libraries/libft -I../libraries/printf \
				  -I../libraries/gnl

HEADER			= test_so_long.h
OBJECTS			= $(SOURCES:%.c=%.o)
SOURCES			= test_main.c
SOURCES			+= test_game_init.c test_runner_game_init.c

NAME			= test.out

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(LINKER) $(UNITY_SOURCE) $(UNITY_FIXTURE) $(OBJECTS) $(INCLUDES) $(FLAGS_MLX) -o $@

%.o: %.c $(HEADER)
	$(COMPILER) $(INCLUDES) $< -o $@

clean:
	$(REMOVE_FORCE) $(OBJECTS)

fclean: clean
	$(REMOVE_FORCE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
