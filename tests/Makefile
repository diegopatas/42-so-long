# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 00:07:56 by ddiniz            #+#    #+#              #
#    Updated: 2022/09/29 15:30:50 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LINKER			= gcc
COMPILER		= $(LINKER) -c

REMOVE			= rm
REMOVE_FORCE	= $(REMOVE) -rf

FLAGS_MLX		+= -lmlx -lXext -lX11

ifdef GDB
COMPILER		+= -g3
endif

PATH_ROOT		= ..
PATH_SOURCE		= $(PATH_ROOT)/sources
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
SOURCES			= $(wildcard *.c)
#SOURCES			+= $(wildcard $(PATH_SOURCE)/*c)
SOURCES			+= $(PATH_SOURCE)/game_init.c $(PATH_SOURCE)/sprites_load.c \
				   $(PATH_SOURCE)/map_valid.c $(PATH_SOURCE)/sprites_unload.c \
				   $(PATH_SOURCE)/map_init.c

NAME			= test.out
PRINTF			= ../libraries/printf/libftprintf.a
LIBFT			= ../libraries/libft/libft.a

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(LINKER) $(UNITY_SOURCE) $(UNITY_FIXTURE) $(OBJECTS) $(LIBFT) $(PRINTF) $(INCLUDES) $(FLAGS_MLX) -o $@

%.o: %.c $(HEADER)
	$(COMPILER) $(INCLUDES) $< -o $@

clean:
	$(REMOVE_FORCE) $(OBJECTS)

fclean: clean
	$(REMOVE_FORCE) $(NAME)

re: fclean all

debug:
	gdb -tui -q $(NAME)

test: all clean
	./$(NAME)

.PHONY: all clean fclean re debug test
