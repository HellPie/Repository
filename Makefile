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

# Directories
INC_DIR := include
SRC_DIR := src
OBJ_DIR := build

# Sources and objects
INC := include
SRC := $(wildcard $(SRC_DIR)/*/*.c)
OBJ := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Compiler flags and defaults
CC ?= gcc
CFLAGS += -Wall -Werror -Wextra

# Archiver flags and defaults
AR ?= ar
ARFLAGS := rcs

# Unit testing configuration
TEST := $(wildcard test/*.c)
TESTLIB := https://github.com/Tuplanolla/cheat/raw/1.0.4
TEST_CFLAGS += -g -DDEBUG -I./test -I./test/include -I./$(INC_DIR)
TEST_CFLAGS += -D__BASE_FILE__=\"tests.c\" -Wno-builtin-macro-redefined

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

debug: CFLAGS += -g -DDEBUG
debug: all

setup_dev:
	$(info Readying dev environment relying on CHEAT from $(TESTLIB))
	@curl -s -L $(TESTLIB)/cheat.h -o test/include/cheat.h
	@curl -s -L $(TESTLIB)/cheats.h -o test/include/cheats.h

test: setup_dev
	$(info Tests rely on CHEAT from $(TESTLIB))
	@echo "Running Norminette ($$(python -m norminette -v)) compliance tests"
	@python -m norminette $(INC) $(SRC) | grep "Error\|Warn"; exit 0
	@echo "Compiling $(NAME) and tests with debug flags"
	@$(MAKE) debug > /dev/null
	@$(CC) $(TEST_CFLAGS) $(TEST) $(NAME) -o ftlib_test
	@echo "Running tests using CHEAT suite"
	@./ftlib_test --colorful --timed --noisy; exit 0
	@echo "Cleaning up after test run completed"
	@rm -rf test/include/cheat.h test/include/cheats.h ftlib_test *.dSYM
	@$(MAKE) fclean > /dev/null

clean:
	$(info Removing all objects and $(OBJ_DIR) if it exists)
	@rm -rf $(OBJ_DIR)

fclean: clean
	$(info Removing $(NAME) if it exists)
	@rm -f $(NAME)

re: fclean all

.PHONY: debug setup_dev test all clean fclean re
