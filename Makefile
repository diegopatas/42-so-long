# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 22:45:12 by ddiniz            #+#    #+#              #
#    Updated: 2022/09/19 17:16:10 by ddiniz           ###   ########.fr        #
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
PATH_LIBFT		= $(PATH_LIBRARY)/libft
PATH_GNL		= $(PATH_LIBRARY)/gnl
PATH_PRINTF		= $(PATH_LIBRARY)/printf

# LIBRARIES AND BINARY
NAME			= so_long
GNL				= $(PATH_GNL)
LIBFT			= $(PATH_LIBFT)/libft.a
PRINTF			= $(PATH_PRINTF)/libftprintf.a

# FILE
FILE_SOURCES	= main.c	render.c	handle_event.c
FILE_OBJECTS	= $(SOURCE:$(PATH_SOURCE)/%.c=$(PATH_OBJECT)/%.o)
FILE_HEADER		= $(PATH_INCLUDE)/so_long.h
SOURCE			= $(addprefix $(PATH_SOURCE)/, $(FILE_SOURCES))

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(GNL) $(PATH_OBJECT) $(FILE_OBJECTS) $(FILE_HEADER)
	@printf "==== Compiling $(NAME) ==== \t"
	@$(LINKER) $(FLAG_C)  $(FILE_OBJECTS) $(FLAG_MLX) -o $@
	@echo OK!
	@printf "To run,  type:\t\t make run ARGV=1\n"
	@printf "To test, type:\t\t make test \n"

$(LIBFT):
	@printf "==== [ Compiling $(LIBFT) ] ===\t"
	@$(MAKE) -C $(PATH_LIBFT) all
	@echo OK!

$(GNL):
	@printf "====  Compiling $(GNL) ======\t"
	@$(MAKE) -C $(PATH_GNL) all
	@echo OK!

$(PRINTF):
	@printf "====  Compiling $(PRINTF)  == \t"
	@$(MAKE) -C $(PATH_PRINTF) all
	@echo OK!

$(PATH_OBJECT)/%.o: $(PATH_SOURCE)/%.c $(FILE_HEADER)
	@$(COMPILER) $(FLAG_C) -I$(PATH_LIBFT) -I$(PATH_GNL) -I$(PATH_PRINTF) \
				-I$(PATH_INCLUDE) $< -o $@

$(PATH_OBJECT):
	@$(MAKE_DIR) $(PATH_OBJECT)

clean:
	@printf "Removing objects... \t"
	@$(REMOVE_FORCE) $(PATH_OBJECT)
	@$(MAKE) -C $(PATH_LIBFT) clean
	@$(MAKE) -C $(PATH_PRINTF) clean
	@echo OK!

fclean: clean
	@printf "Removing binary... \t"
	@$(REMOVE_FORCE) $(NAME)
	@$(MAKE) -C $(PATH_LIBFT) fclean
	@$(MAKE) -C $(PATH_PRINTF) fclean
	@echo OK!

re: fclean all

run: all
	./$(NAME) $(ARGUMENTS)

debug: all
	$(DEBUG) $(NAME)

leak: all
	$(MEMCHECK) $(FLAG_LEAK) ./$(NAME) $(ARGUMENTS)

.PHONY: all fclean clean re run leak
