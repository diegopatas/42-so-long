# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 00:07:56 by ddiniz            #+#    #+#              #
#    Updated: 2022/09/21 10:56:48 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LINKER			= gcc
COMPILER		= $(LINKER) -c

REMOVE			= rm
REMOVE_FORCE	= $(REMOVE) -rf

PATH_UNITY		= ./unity/src
PATH_FIXTURE	= ./unity/extras/fixture/src
PATH_MEMORY		= ./unity/extras/memory/src

UNITY_SOURCE	= $(PATH_UNITY)/unity.c
UNITY_FIXTURE	= $(PATH_FIXTURE)/unity_fixture.c

INCLUDES		= -I$(PATH_UNITY) -I$(PATH_FIXTURE) -I$(PATH_MEMORY)

OBJECTS			= $(SOURCES:%.c=%.o)
SOURCES			= test_main.c
SOURCES			+=

NAME			= test.out

all: $(NAME)

$(NAME): $(OBJECTS)
	$(LINKER) $(UNITY_SOURCE) $(UNITY_FIXTURE) $(OBJECTS) $(INCLUDES) -o $@

%.o: %.c
	$(COMPILER) $(INCLUDES) $< -o $@

clean:
	$(REMOVE_FORCE) $(OBJECTS)

fclean: clean
	$(REMOVE_FORCE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
