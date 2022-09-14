# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 22:45:12 by ddiniz            #+#    #+#              #
#    Updated: 2022/09/14 17:24:32 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER		= gcc

CFLAGS			+= -Wall
CFLAGS			+= -Wextra
CFLAGS			+= -Werror

ifdef GDB
CFLAGS			+= -g3
endif

MLXFLAGS		+= -lmlx
MLXFLAGS		+= -lXext
MLXFLAGS		+= -lX11

LEAKFLAGS		+= --leak-check=full
LEAKFLAGS		+= --show-leak-kinds=all
LEAKFLAGS		+= --track-origins=yes
LEAKFLAGS		+= -s

PATH_INCLUDES	= ./includes
PATH_SOURCES	= ./sources

PATH_LIB		= ./libraries
PATH_LIBFT		= $(PATH_LIB)/libft
PATH_GN			= $(PATH_LIB)/gnl
PATH_PRINTF		= $(PATH_LIB)/printf

LIBFT			= libft.a
GNL				= gnl.a
PRINTF			= libftprintf.a

NAME			= so_long

FILES			= main.c

MAIN			= $(PATH_SOURCES)/main.c

all: $(NAME)

$(NAME): libraries
	$(COMPILER) $(CFLAGS) $(PATH_SOURCES)/*.c -I$(PATH_INCLUDES) $(PATH_PRINTF)/$(PRINTF) $(MLXFLAGS) -o $@

libraries:
#	$(MAKE) -C $(DIR_LIBFT) all
#	$(MAKE) -C $(DIR_GNL) all
	$(MAKE) -C $(PATH_PRINTF) all

clean:
	rm -rf $(OBJECTS)
	$(MAKE) -C $(PATH_PRINTF) clean

fclean: clean
	rm -rf $(NAME) mock
	$(MAKE) -C $(PATH_PRINTF) fclean

re: fclean all

run: all
	./$(NAME)

debug: all
	gdb -q $(NAME) -tui

leak: all
	valgrind $(LEAKFLAGS) ./$(NAME) test

mock:
	$(COMPILER) $(CFLAGS) $(MAIN) -I$(PATH_INCLUDES) $(MLXFLAGS) -o $@
	./$@

.PHONY: all fclean clean re mock run leak libraries
