/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** search_position
*/

#include "../../includes/index.h"

vect2i search_position(string_t *this, const char *search_value)
{
    vect2i position = {0, 0};
    int n = 0;

    for (int i = 0; search_value[n] && this->value[i]; i++) {
        if (this->value[i] != search_value[n]) {
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