/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** replace
*/

#include "includes/index.h"
#include <assert.h>
#include <stdio.h>

static int check_error(const char *search_value, const char *replace_value)
{
    if (!search_value || !replace_value)
        return (EXIT_ERROR);
    return (true);
}

static vect2i search_position(string *string, const char *search_value)
{
    vect2i position = {0, 0};
    int n = 0;

    for (int i = 0; string->value[i]; i++) {
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
    return (position);
}

static char *replacing(string *string, vect2i position, const char *replace_value)
{
    printf("%c\n", string->value[0]);
    for (int i = position.x, n = 0; replace_value[i]; i++, n++) {
        string->value[i] = replace_value[n];
        printf("%c\n", string->value[i]);
    }
    return (string->value);
}

char *replace(string *string, const char *search_value, const char *replace_value)
{
    vect2i position = {0, 0};

    if (EXIT_ERROR == check_error(search_value, replace_value))
        return (NULL);
    position = search_position(string, search_value);
    printf("position: %d.%d", position.x, position.y);
    if (position.y)
        return (replacing(string, position, replace_value));
    return (string->value);
}