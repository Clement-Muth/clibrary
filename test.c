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
    number number = create_number(5);

    console.warn(&number);
    return 0;
}