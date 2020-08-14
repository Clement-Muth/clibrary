/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** copy_current_and_after
*/

#include "../../includes/index.h"

static bool first_error(char *copy)
{
    if (copy == NULL) {
        my_assert_warn_dev(copy != NULL,
        DESC_ERR_ALLOC_FAILED, ERR_ALC84, FAIL_EXEC);
        return (false);
    }
    return (true);
}

static bool second_error(char *copy)
{
    if (copy == NULL) {
        my_assert_warn_dev(copy != NULL,
        DESC_ERR_ALLOC_FAILED, ERR_ALC84, FAIL_EXEC);
        return (false);
    }
    return (true);
}

char **copy_current_and_after(string *string, char **copy,
                              vect2i position, int i)
{
    copy[1] = malloc(position.y - position.x + 3);
    if (!first_error(copy[1]))
        return (NULL);
    i = position.x;
    for (int n = 0; i <= position.y; i++, n++)
        copy[1][n] = string->value[i];
    copy[1][position.y - position.x] = '\0';
    copy[2] = malloc(string->length - position.y + 1);
    if (second_error(copy[2]))
        return (NULL);
    if ((int)string->length != position.y) {
        i = position.y;
        for (int n = 0; i <= (int)string->length; i++, n++)
            copy[2][n] = string->value[i];
        copy[2][string->length - position.y] = '\0';
    } else
        copy[2][0] = '\0';
    return (copy);
}