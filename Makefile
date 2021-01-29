##
## EPITECH PROJECT, 2020
## library [WSL: Debian]
## File description:
## Makefile
##

GCC	=	gcc
CFLAGS	=	-Wall -Wextra -g -DDEBUG
LBLIBS	=	-L./bin/ -lconsole -L./bin/ -ltypes -L./bin/ -lutils -L./bin/ -lassert
LIB_PATH	=	library

SRC =	main.c
OBJ =	$(SRC:.c=.o)
EXEC =	test

all: $(EXEC)

$(EXEC): lib $(OBJ)
	$(GCC) $(CFLAGS) -o $@ $(OBJ) $(LBLIBS)

lib:
	$(MAKE) -C $(LIB_PATH)/types/
	$(MAKE) -C $(LIB_PATH)/print/
	$(MAKE) -C $(LIB_PATH)/assert/
	$(MAKE) -C $(LIB_PATH)/utils/

clean:
	rm -rf $(OBJ)
	$(MAKE) -C $(LIB_PATH)/types/ clean
	$(MAKE) -C $(LIB_PATH)/print/ clean
	$(MAKE) -C $(LIB_PATH)/assert/ clean
	$(MAKE) -C $(LIB_PATH)/utils/ clean

fclean:	clean
	rm -rf $(EXEC)
	$(MAKE) -C $(LIB_PATH)/types/ fclean
	$(MAKE) -C $(LIB_PATH)/print/ fclean
	$(MAKE) -C $(LIB_PATH)/assert/ fclean
	$(MAKE) -C $(LIB_PATH)/utils/ fclean

re:	fclean all

.PHONY:	clean fclean re all