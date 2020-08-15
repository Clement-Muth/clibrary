/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** test
*/

#include "includes/index.h"

int main(void)
{
    string_t test = new_string(NULL);
    console_t console = init_console();

    console.logger(test.value);
    return (0);
}