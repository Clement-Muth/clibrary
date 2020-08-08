/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** replace
*/

#include "includes/index.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

static vect2i search_position(string *string, const char *search_value)
{
    vect2i position = {0, 0};
    int n = 0;

    for (int i = 0; search_value[n] && string->value[i]; i++) {
        if (string->value[i] != search_value[n]) {
            n = 0;
            position.y = 0;
            continue;
        }
        if (0 == n)
            position.x = i;
        position.y++;
        n++;
    }
    position.y += position.x;
    return (n) ? position : (vect2i){0, 0};
}

static char *replacing(string *string, char **copy, const char *replace_value)
{
    return (string->value = my_strcat(copy[0], my_strcat((char *)replace_value, copy[2])));
}

static char **copy_current_and_after(string *string, char **copy, vect2i position)
{
    int i = 0;

    copy[1] = malloc(position.y - position.x + 3);
    i = position.x;
    for (int n = 0; i <= position.y; i++, n++)
        copy[1][n] = string->value[i];
    copy[1][position.y - position.x] = '\0';
    copy[2] = malloc(string->length - position.y + 1);
    if ((int)string->length != position.y) {
        i = position.y;
        for (int n = 0; i <= (int)string->length; i++, n++)
            copy[2][n] = string->value[i];
        copy[2][string->length - position.y] = '\0';
    } else
        copy[2][0] = '\0';
    return (copy);
}

static char **create_copy(string *string, char **copy, vect2i position)
{
    int i = 0;

    copy = malloc(sizeof(char *) * 4);
    copy[0] = malloc(position.x + 1);
    if (0 != position.x) {
        for (i = 0; i != position.x; i++)
            copy[0][i] = string->value[i];
        copy[0][position.x] = '\0';
    } else
        copy[0][0] = '\0';
    copy_current_and_after(string, copy, position);
    copy[3] = NULL;
    return (copy);
}

void replace(string *string, const char *search_value, const char *replace_value)
{
    vect2i position = {0, 0};
    char **decomposed_string = NULL;

    if (!search_value || !replace_value)
        return;
    position = search_position(string, search_value);
    if (!position.y)
        return;
    decomposed_string = create_copy(string, decomposed_string, position);
    replacing(string, decomposed_string, replace_value);
    for (int i = 0; decomposed_string[i]; i++)
        free(decomposed_string[i]);
    free(decomposed_string);
}