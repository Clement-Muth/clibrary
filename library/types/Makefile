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

LIB 				=	libtypes.a

## ==============================SOURCE ARRAY================================== ##
PATH_ARRAY			=	array/
SRC_ARRAY			=	string/new_string_a.c \
						string/push.c \
						string/copy.c

## ==============================SOURCE NUMBER================================== ##
PATH_NUMBER			=	number/
SRC_NUMBER			=	new_number.c

## ==============================SOURCE STRING================================== ##
PATH_STRING			=	string/
SRC_STRING			=	new_string.c \
						functions/concat/concat.c \
						functions/index_of.c \
						functions/last_index_of.c \
						functions/match.c \
						functions/replace/copy_current_and_after.c \
						functions/replace/error.c \
						functions/replace/replace_create_copy.c \
						functions/replace/replace.c \
						functions/replace/replacing.c \
						functions/replace/search_position.c \
						functions/substr.c

SRC					=	$(addprefix $(PATH_ARRAY), $(SRC_ARRAY)) \
						$(addprefix $(PATH_NUMBER), $(SRC_NUMBER)) \
						$(addprefix $(PATH_STRING), $(SRC_STRING))

CFLAGS 				=	-Wall -I./include -L./bin/ -lutils

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