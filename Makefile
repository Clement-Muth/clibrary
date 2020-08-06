##
## EPITECH PROJECT, 2020
## library [WSL: Debian]
## File description:
## Makefile
##

C = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -g -fsanitize=address -DDEBUG
LDFLAGS =  -fsanitize=address -Iincludes/

SRC = 	print/init_print.c \
		print/print.c \
		print/warn.c \
		print/error.c \
		print/log.c \
		print/color.c \
		utils/strlen.c \
		utils/strdup.c \
		utils/memcpy.c \
		assert/assert_fail.c \
		stringify/init_string.c \
		stringify/main.c \
		stringify/concat.c \
		stringify/replace.c \
		stringify/slice.c \
		stringify/substr.c \
		stringify/index_of.c \
		stringify/last_index_of.c \
		stringify/match.c
OBJ = $(SRC:.c=.o)
EXEC = test

all: $(EXEC)

$(EXEC): $(OBJ)
	$(C) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)