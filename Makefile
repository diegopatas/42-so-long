# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 22:45:12 by ddiniz            #+#    #+#              #
#    Updated: 2022/09/21 16:16:14 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
LINKER			= gcc
COMPILER		= $(LINKER) -c

# SHELL COMMANDS
REMOVE			= rm
REMOVE_FORCE	= $(REMOVE) -rf
MAKE_DIR		= mkdir -p
DEBUG			= gdb -q -tui
MEMCHECK		= valgrind

# SELECTIONS
ifdef GDB
FLAG_C			+= -g3
endif

ifdef ARGV
ARGUMENTS 			+= map.ber
endif

# COMPILATION FLAG
FLAG_C			+= -Wall -Wextra -Werror
FLAG_MLX		+= -lmlx -lXext -lX11
FLAG_LEAK		+= --leak-check=full --show-leak-kinds=all --track-origins=yes
FLAG_LEAK		+= -s

# DIRECTORIES
PATH_INCLUDE	= includes
PATH_SOURCE		= sources
PATH_OBJECT		= objects
PATH_LIBRARY	= libraries
PATH_TESTS		= tests
PATH_LIBFT		= $(PATH_LIBRARY)/libft
PATH_GNL		= $(PATH_LIBRARY)/gnl
PATH_PRINTF		= $(PATH_LIBRARY)/printf

# LIBRARIES AND BINARY
NAME			= so_long
GNL				= $(PATH_GNL)
LIBFT			= $(PATH_LIBFT)/libft.a
PRINTF			= $(PATH_PRINTF)/libftprintf.a

# FILE
INCLUDES		= -I$(PATH_INCLUDE) -I$(PATH_LIBFT) -I$(PATH_PRINTF) -I$(PATH_GNL)
FILE_SOURCES	= so_long.c		render.c	handle_event.c
FILE_OBJECTS	= $(SOURCE:$(PATH_SOURCE)/%.c=$(PATH_OBJECT)/%.o)
FILE_HEADER		= $(PATH_INCLUDE)/so_long.h
SOURCE			= $(addprefix $(PATH_SOURCE)/, $(FILE_SOURCES))

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(GNL) $(PATH_OBJECT) $(FILE_OBJECTS) $(FILE_HEADER)
	$(LINKER) $(FLAG_C) $(FILE_OBJECTS) $(FLAG_MLX) -o $@

$(LIBFT):
	$(MAKE) -C $(PATH_LIBFT) all

$(GNL):
	$(MAKE) -C $(PATH_GNL) all

$(PRINTF):
	$(MAKE) -C $(PATH_PRINTF) all

$(PATH_OBJECT)/%.o: $(PATH_SOURCE)/%.c $(FILE_HEADER)
	@$(COMPILER) $(FLAG_C) $(INCLUDES) $< -o $@

$(PATH_OBJECT):
	$(MAKE_DIR) $(PATH_OBJECT)

clean:
	$(REMOVE_FORCE) $(PATH_OBJECT)
	@$(MAKE) -C $(PATH_LIBFT) clean
	@$(MAKE) -C $(PATH_PRINTF) clean
	@$(MAKE) -C $(PATH_TESTS) clean

fclean: clean
	$(REMOVE_FORCE) $(NAME)
	@$(MAKE) -C $(PATH_LIBFT) fclean
	@$(MAKE) -C $(PATH_PRINTF) fclean
	@$(MAKE) -C $(PATH_TESTS) fclean

re: fclean all

run: all
	./$(NAME) $(ARGUMENTS)

debug: all
	$(DEBUG) $(NAME)

leak: all
	$(MEMCHECK) $(FLAG_LEAK) ./$(NAME) $(ARGUMENTS)

test:
	$(MAKE) -C $(PATH_TESTS) all

.PHONY: all fclean clean re run leak test debug
