/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** test
*/

#include "includes/index.h"

int main(void)
{
    string_t string = new_string("test");

    printf("%d\n", string.index_of(&string, NULL).x);
    return (0);
}