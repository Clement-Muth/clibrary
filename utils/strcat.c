/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** strcat
*/

#include "includes/index.h"
#include <stdlib.h>

bool check_error(const char *src, const char *result)
{
    if (src == NULL) {
        my_assert_dev(result != NULL, DESC_ERR_STRCAT_SRC_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
        return (false);
    }
    if (result == NULL) {
        my_assert_dev(result != NULL, DESC_ERR_ALLOC_FAILED, ERR_ALC84,
        FAIL_EXEC);
        return (false);
    }
    return (true);
}

char *my_strcat(char *dest, const char *src)
{
    vect2i inc = {0, 0};
    int cont = 0;
    int h = my_strlen(dest) + my_strlen(src) + 1;
    char *result = malloc(h * sizeof(char));

    if (!check_error(src, result))
        return (UNDEFINED);
    for(inc.x = 0; inc.x < (int)my_strlen(dest); inc.x++)
        result[inc.x] = dest[inc.x];
    for(inc.y = inc.x; inc.y < (int)(my_strlen(src) + my_strlen(dest)); inc.y++)
        result[inc.y] = src[cont++];
    result[h - 1] = '\0';
    dest = result;
    return (result);
}