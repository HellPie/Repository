# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 13:03:52 by drossi            #+#    #+#              #
#    Updated: 2021/11/15 23:06:45 by drossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

# Sources and objects
INC := .
SRC := $(wildcard *.c)
OBJ := $(patsubst %.c,%.o,$(SRC))

# Compiler flags and defaults
CC ?= gcc
CFLAGS += -Wall -Werror -Wextra

# Archiver flags and defaults
AR ?= ar
ARFLAGS := -rcs

# Build, archive and index the static library
$(NAME): $(OBJ)
	$(info Archiving objects into $(NAME))
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
# @ranlib $(NAME) shouldn't be necessary anymore unless Mojave uses obsolete ar

# Build a single source file into its correspondent object file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(info Building $@ from $< as it was new or changed)
	@mkdir -p $$(dirname $@)
	@$(CC) $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

clean:
	$(info Removing all objects if any exist)
	@rm -rf *.o

fclean: clean
	$(info Removing $(NAME) if it exists)
	@rm -f $(NAME)

re: fclean all

.PHONY: debug setup_dev test all clean fclean re
