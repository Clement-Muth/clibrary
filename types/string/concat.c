/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** concat
*/

#include "includes/index.h"
#include <stdlib.h>
#include <stdio.h>

string concat(string *string, const char *src)
{
    vect2i inc = {0, 0};
    int cont = 0;
    int h = my_strlen(string->value) + my_strlen(src) + 1;
    char *result = (char*)malloc(h * sizeof(char));

    if (src == NULL) {
        my_assert_dev(src != NULL, DESC_ERR_CONCAT_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
        return (*string);
    }
    for(inc.x = 0; inc.x < (int)my_strlen(string->value); inc.x++)
        result[inc.x] = string->value[inc.x];
    for(inc.y = inc.x; inc.y < (int)(my_strlen(src) + my_strlen(string->value));
        inc.y++)
        result[inc.y] = src[cont++];
    result[h - 1] = '\0';
    string->value = result;
    string->length = my_strlen(string->value);
    string->self->value = string->value;
    string->self->type = string->type;
    return (*string);
}