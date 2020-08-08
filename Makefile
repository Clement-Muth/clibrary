##
## EPITECH PROJECT, 2020
## library [WSL: Debian]
## File description:
## Makefile
##

C = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -g -DDEBUG
LDFLAGS =  -Iincludes/ -L./bin/ -lconsole -L./bin/ -ltypes utils/*.c
LBLIBS = -L./bin/ -lconsole -L./bin/ -ltypes

SRC = 	test.c
OBJ = $(SRC:.c=.o)
EXEC = test

all: $(EXEC)

$(EXEC): lib $(OBJ)
	$(C) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

lib:
	$(MAKE) -C types/
	$(MAKE) -C print/

clean:
	rm -rf $(OBJ) $(EXEC)