# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 22:45:12 by ddiniz            #+#    #+#              #
#    Updated: 2022/10/13 17:52:03 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
LINKER			= cc
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

ifdef GCC
LINKER			= gcc
endif

ifdef ARGV
ARGUMENTS 		+= $(PATH_MAPS)/map.ber
endif

ARGL			=

# COMPILATION FLAG
FLAG_C			+= -Wall -Wextra -Werror
FLAG_MLX		+= -lmlx -lXext -lX11
FLAG_LEAK		+= --leak-check=full --show-leak-kinds=all --track-origins=yes
FLAG_LEAK		+= -s

# DIRECTORIES
PATH_INCLUDE	= includes
PATH_SOURCE		= sources
PATH_OBJECT		= objects
PATH_ASSETS		= assets
PATH_MAPS		= $(PATH_ASSETS)/maps
PATH_LIBRARY	= libraries
PATH_TESTS		= tests
PATH_LIBFT		= $(PATH_LIBRARY)/libft
PATH_PRINTF		= $(PATH_LIBRARY)/printf

# LIBRARIES AND BINARY
NAME			= so_long
LIBFT			= $(PATH_LIBFT)/libft.a
PRINTF			= $(PATH_PRINTF)/libftprintf.a

# FILE
INCLUDES		= -I$(PATH_INCLUDE) -I$(PATH_LIBFT) -I$(PATH_PRINTF)

FILE_SOURCES	= so_long.c				game_render.c			event_key_handle.c \
				  game_attribute_init.c	game_interface_load.c	game_interface_unload.c \
				  game_run.c 			game_unload.c \
				  sprites_load.c		sprites_unload.c \
				  map_is_valid.c		map_is_path_valid.c		map_draw.c \
				  map_load.c 			map_unload.c			map_rect_check.c \
				  map_size_check.c		map_char_check.c		player_move_check.c \
				  player_pos_get.c		event_click_handle.c \
				  log_message.c			file_is_valid.c \

FILE_OBJECTS	= $(SOURCE:$(PATH_SOURCE)/%.c=$(PATH_OBJECT)/%.o)
FILE_HEADER		= $(PATH_INCLUDE)/so_long.h
SOURCE			= $(addprefix $(PATH_SOURCE)/, $(FILE_SOURCES))

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(PATH_OBJECT) $(FILE_OBJECTS) $(FILE_HEADER)
	$(LINKER) $(FLAG_C) $(FILE_OBJECTS) $(LIBFT) $(PRINTF) $(FLAG_MLX) -o $@

$(LIBFT):
	$(MAKE) -C $(PATH_LIBFT) all

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
	$(DEBUG) ./$(NAME) $(ARGUMENTS)

leak: all
	$(MEMCHECK) $(FLAG_LEAK) ./$(NAME) $(ARGL)

test:
	$(MAKE) -C $(PATH_TESTS) all

.PHONY: all fclean clean re run leak test debug
