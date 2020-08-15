/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** replace
*/

#include "includes/index.h"
#include "includes/utils_function.h"

void replace(string_t *this, const char *search_value,
            const char *replace_value)
{
    vect2i position = {0, 0};
    char **decomposed_string = NULL;

    if (!replace_error(search_value, replace_value))
        return;
    position = search_position(this, search_value);
    if (!position.y)
        return;
    decomposed_string = replace_create_copy(this, decomposed_string, position,
    0);
    if (decomposed_string == NULL)
        return;
    replacing(this, decomposed_string, replace_value);
    for (int i = 0; decomposed_string[i]; i++)
        free(decomposed_string[i]);
    free(decomposed_string);
}