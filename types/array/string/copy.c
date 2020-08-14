/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** copy
*/

#include "includes/index.h"

char **copy(const array_s *array)
{
    char **new_array = malloc(sizeof(char *) * (array->length + 1));

    if (new_array == NULL) {
        my_assert_dev(new_array != NULL, DESC_ERR_ALLOC_FAILED, ERR_ALC84,
        FAIL_EXEC);
        return (NULL);
    }
    array->foreach(E(el, array, i, {
        new_array[i] = my_strdup(el.value);
    }));
    new_array[array->length] = NULL;
    return (new_array);
}