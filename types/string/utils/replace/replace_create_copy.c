/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** replace_create_copy
*/

#include "../../includes/index.h"

char **replace_create_copy(string *string, char **copy, vect2i position, int i)
{
    copy = malloc(sizeof(char *) * 4);
    if (copy == NULL) {
        my_assert_dev(copy, DESC_ERR_ALLOC_FAILED, ERR_ALC84, FAIL_EXEC);
        return (NULL);
    }
    copy[0] = malloc(position.x + 1);
    if (copy == NULL) {
        my_assert_dev(copy, DESC_ERR_ALLOC_FAILED, ERR_ALC84, FAIL_EXEC);
        return (NULL);
    }
    if (0 != position.x) {
        for (i = 0; i != position.x; i++)
            copy[0][i] = string->value[i];
        copy[0][position.x] = '\0';
    } else
        copy[0][0] = '\0';
    if (!copy_current_and_after(string, copy, position, 0))
        return (NULL);
    copy[3] = NULL;
    return (copy);
}