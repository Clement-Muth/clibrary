/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** replace
*/

#include "includes/index.h"
#include "includes/utils_function.h"

void replace(string *string, const char *search_value,
            const char *replace_value)
{
    vect2i position = {0, 0};
    char **decomposed_string = NULL;

    if (!error(search_value, replace_value))
        return;
    position = search_position(string, search_value);
    if (!position.y)
        return;
    decomposed_string = replace_create_copy(string, decomposed_string, position,
    0);
    if (decomposed_string == NULL)
        return;
    replacing(string, decomposed_string, replace_value);
    for (int i = 0; decomposed_string[i]; i++)
        free(decomposed_string[i]);
    free(decomposed_string);
}