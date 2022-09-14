# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 22:45:12 by ddiniz            #+#    #+#              #
#    Updated: 2022/09/12 15:55:21 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER	= gcc

CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror
CFLAGS		+= -g3

MLXFLAGS	+= -lmlx
MLXFLAGS	+= -lXext
MLXFLAGS	+= -lX11

LEAKFLAGS	+= --leak-check=full
LEAKFLAGS	+= --show-leak-kinds=all
LEAKFLAGS	+= --track-origins=yes
LEAKFLAGS	+= -s

NAME		= so_long

FILES		= main.c

INCLUDES	= ./includes
SOURCES		= ./sources

DIR_LIBFT	= ./libft
DIR_GNL		= ./gnl
DIR_PRINTF	= ./printf

LIBFT		= libft.a
GNL			= gnl.a
PRINTF		= libftprintf.a

MAIN		= $(SOURCES)/main.c

all: $(NAME)

$(NAME): libraries
	$(COMPILER) $(CFLAGS) $(SOURCES)/*.c -I$(INCLUDES) $(DIR_PRINTF)/$(PRINTF) $(MLXFLAGS) -o $@

libraries:
#	$(MAKE) -C $(DIR_LIBFT) all
#	$(MAKE) -C $(DIR_GNL) all
	$(MAKE) -C $(DIR_PRINTF) all

run: all
	./$(NAME)

debug: all
	gdb -q so_long -tui

leak: all
	valgrind $(LEAKFLAGS) ./$(NAME) test

mock:
	$(COMPILER) $(CFLAGS) $(MAIN) -I$(INCLUDES) $(MLXFLAGS) -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME) mock
