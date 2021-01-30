##
## EPITECH PROJECT, 2020
## clibrary [WSL: Debian]
## File description:
## Makefile
##

.PHONY:	all clean fclean re

LIB	=	libassert.a

SRC	=	my_assert.c \
		my_warning_assert.c

CFLAGS	=	-Wall -I./includes -DDEBUG -Werror -Wextra -pedantic

AR	=	ar rc

MV	=	mv

LIB_OBJ	=	$(SRC:.c=.o)

all:	$(LIB)
	$(MV) $(LIB) ../../bin/

$(LIB):	$(LIB_OBJ)
	$(AR) $(LIB) $(LIB_OBJ)

clean:
	$(RM) $(LIB_OBJ)

fclean:	clean
	$(RM) $(LIB)
	$(RM) ../../bin/$(LIB)

re:	fclean all

.PHONY				: all clean fclean re