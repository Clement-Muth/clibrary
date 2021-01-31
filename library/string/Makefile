##
## EPITECH PROJECT, 2020
## clibrary [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				=	/bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"
WARNING				=	/bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\x1b[0m"
ERROR				=	/bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
DONE				=	/bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[34m $1\x1b[0m"

LIB 				=	libstring.a

## ==============================SOURCE STRING=============================== ##
SRC					=	new_string.c	\
						find.c	\
						print.c	\
						assign.c	\
						destroy.c	\
						append.c	\
						insert.c	\
						at.c	\
						to_int.c	\
						compare.c

CFLAGS 				=	-Wall -DDEBUG -Werror -Wextra -pedantic

AR 					=	ar rc

MV					=	mv

LIB_OBJ 			=	$(SRC:.c=.o)

all:					$(LIB)
						$(MV) $(LIB) ../../bin/

$(LIB):					$(LIB_OBJ)
						$(AR) $(LIB) $(LIB_OBJ)

clean_lib:
						$(RM) $(LIB)

clean:
						$(RM) $(LIB_OBJ)

fclean:					clean
						$(RM) $(LIB)
						$(RM) ../../bin/$(LIB)

re:						fclean all

.PHONY:					all clean fclean re