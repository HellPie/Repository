# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 13:03:52 by drossi            #+#    #+#              #
#    Updated: 2022/03/21 20:57:10 by drossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

# Directories
INC_DIR := include
SRC_DIR := src
OBJ_DIR := build

# Sources and objects
INC := include
SRC := $(wildcard $(SRC_DIR)/**/*.c)
OBJ := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Compiler flags and defaults
CC ?= gcc
CFLAGS += -Wall -Werror -Wextra

ifeq ($(DEBUG),1)
	$(info Configuring additional debug options.)
	CFLAGS += -fsanitize=address,undefined -fno-sanitize-recover=all
	CFLAGS += -g -DDEBUG
endif

# Archiver flags and defaults
AR ?= ar
ARFLAGS := rcs

# Unit testing configuration
TEST := $(wildcard test/*.c)
TESTLIB := https://github.com/Tuplanolla/cheat/raw/1.0.4
TEST_CFLAGS += -g -DDEBUG -I./test -I./test/include -I./$(INC_DIR)
TEST_CFLAGS += -D__BASE_FILE__=\"tests.c\" -Wno-builtin-macro-redefined

# Norminette configuration
NORMINETTE ?= python3 -m norminette

# Build, archive and index the static library
$(NAME): $(OBJ)
	$(info Archiving objects into $(NAME))
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
# @ranlib $(NAME) shouldn't be necessary anymore unless Mojave uses obsolete ar

# Build a single source file into its correspondent object file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(info Building $@ from $< as it was new or changed)
	@mkdir -p $$(dirname $@)
	@$(CC) $(CFLAGS) -I./$(INC_DIR) -c $< -o $@

all: $(NAME)

debug:
	$(info Compiling $(NAME) with debug flags)
debug: CFLAGS += -fsanitize=address,undefined -fno-sanitize-recover=all
debug: CFLAGS += -g -DDEBUG
debug: re

setup_dev:
	$(info Readying dev environment relying on CHEAT from $(TESTLIB))
	@curl -s -L $(TESTLIB)/cheat.h -o test/include/cheat.h
	@curl -s -L $(TESTLIB)/cheats.h -o test/include/cheats.h

norme:
	$(info Running Norminette ($(shell $(NORMINETTE) -v)) compliance tests)
	@$(NORMINETTE) $(wildcard $(INC)/**.h) $(SRC) | grep "Error\|Warn"; exit 0

symbols: $(OBJ)
	$(info Verifying usage of undefined (external) symbols)
	@ld -r $(OBJ) -o $(OBJ_DIR)/libft.o
	@nm -uP $(OBJ_DIR)/libft.o | grep -w "U"
	@$(RM) $(OBJ_DIR)/libft.o

test: norme symbols setup_dev debug
	$(info Tests rely on CHEAT from $(TESTLIB))
	@$(CC) $(TEST_CFLAGS) $(TEST) $(NAME) -o ftlib_test
	@echo "Running tests using CHEAT suite"
	@./ftlib_test --colorful --timed --noisy & exit 0
	@$(RM) ftlib_test
test: fclean

clean:
	$(info Removing all objects and $(OBJ_DIR) if it exists)
	@$(RM) -r $(OBJ_DIR)
	$(info Removing debug symbols and test libraries if they exist)
	@$(RM) -r test/include/cheat.h test/include/cheats.h
	@$(RM) *.dSYM

fclean: clean
	$(info Removing $(NAME) if it exists)
	@$(RM) $(NAME)
	$(info Removing testing outputs if they exist)
	@$(RM) ftlib_test

re: fclean all

.PHONY: debug setup_dev norme symbols test all clean fclean re
