/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** concat
*/

#include "includes/index.h"
#include "../../utils/includes/index.h"
#include "../../assert/includes/index.h"
#include "../../assert/includes/constant.h"
#include <stdlib.h>
#include <stdio.h>

string_t concat(string_t *this, const char *src)
{
    vect2i inc = {0, 0};
    int cont = 0;
    int h = my_strlen(this->value) + my_strlen(src) + 1;
    char *result = (char*)malloc(h * sizeof(char));

    if (src == NULL) {
        my_assert_dev(src != NULL, DESC_ERR_CONCAT_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
        return (*this);
    }
    for(inc.x = 0; inc.x < (int)my_strlen(this->value); inc.x++)
        result[inc.x] = this->value[inc.x];
    for(inc.y = inc.x; inc.y < (int)(my_strlen(src) + my_strlen(this->value));
        inc.y++)
        result[inc.y] = src[cont++];
    result[h - 1] = '\0';
    this->value = result;
    this->length = my_strlen(this->value);
    return (*this);
}