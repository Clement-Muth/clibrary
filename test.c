/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** test
*/

#include "includes/index.h"

int main(void)
{
    console console = init_console();
    // string string = create_string("bonjour");
    // number number = create_number(5);
    array_s type = create_array_s((const char *[]){"string", "number", '\0'});

    console.warn(&type);
    return 0;
}