##
## EPITECH PROJECT, 2020
## library [WSL: Debian]
## File description:
## Makefile
##

GCC =	gcc
CFLAGS =	-Wall -Wextra -std=c99 -g -DDEBUG
LDFLAGS =	-Iincludes/ -L./bin/ -lconsole -L./bin/ -ltypes utils/*.c
LBLIBS =	-L./bin/ -lconsole -L./bin/ -ltypes -L./bin/ -lassert

SRC =	test.c
OBJ =	$(SRC:.c=.o)
EXEC =	test

all: $(EXEC)

$(EXEC): lib $(OBJ)
	$(GCC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

lib:
	$(MAKE) -C types/
	$(MAKE) -C print/
	$(MAKE) -C assert/

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(EXEC)
	$(MAKE) -C types/ fclean
	$(MAKE) -C print/ fclean
	$(MAKE) -C assert/ fclean

re:	fclean all

.PHONY:	clean fclean re all