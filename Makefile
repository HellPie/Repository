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
SRC := ./ft_strncat.c ./ft_strnstr.c ./ft_isdigit.c ./ft_toascii.c \
       ./ft_putstr_fd.c ./ft_strequ.c ./ft_strlcpy.c ./ft_strlen.c \
       ./ft_memrchr.c ./ft_isblank.c ./ft_memcmp.c ./ft_putnbr.c ./ft_lldiv.c \
       ./ft_strclr.c ./ft_strsplit.c ./ft_putnbr_fd.c ./ft_strnlen.c \
       ./ft_stpcpy.c ./ft_isxdigit.c ./ft_strchr.c ./ft_ldiv.c \
       ./ft_striteri.c ./ft_bzero.c ./ft_strjoin.c ./ft_isascii.c \
       ./ft_memcpy.c ./ft_div.c ./ft_strstr.c ./ft_memalloc.c ./ft_putendl.c \
       ./ft_memccpy.c ./ft_strcat.c ./ft_isprint.c ./ft_putendl_fd.c \
       ./ft_strdel.c ./ft_strnequ.c ./ft_toupper.c ./ft_putchar.c \
       ./ft_strrchr.c ./ft_isalpha.c ./ft_memchr.c ./ft_strmap.c \
       ./ft_putchar_fd.c ./ft_memset.c ./ft_strncmp.c ./ft_ispunct.c \
       ./ft_strcpy.c ./ft_isgraph.c ./ft_strmapi.c ./ft_strtrim.c \
       ./ft_memdel.c ./ft_memmove.c ./ft_islower.c ./ft_abs.c ./ft_strnew.c \
       ./ft_isupper.c ./ft_putstr.c ./ft_labs.c ./ft_strlcat.c ./ft_llabs.c \
       ./ft_strdup.c ./ft_strchrnul.c ./ft_stpncpy.c ./ft_atoi.c \
       ./ft_isalnum.c ./ft_itoa.c ./ft_striter.c ./ft_iscntrl.c \
       ./ft_isspace.c ./ft_strsub.c ./ft_strncpy.c ./ft_tolower.c ./ft_strcmp.c
OBJ := $(patsubst %.c,%.o,$(SRC))

# Compiler flags and defaults
CC := gcc
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
	@$(CC) $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

clean:
	$(info Removing all objects if any exist)
	@rm -rf $(OBJ)

fclean: clean
	$(info Removing $(NAME) if it exists)
	@rm -f $(NAME)

re: fclean all

.PHONY: debug setup_dev test all clean fclean re
