/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** main
*/

#include "includes/index.h"
#include <stdio.h>

int main(void)
{
    print_t print = init_print();
    string error = init_string("bonjour");

    printf("%ld\n", error.length);
    error.concat(&error, " comment ca av ?\n");
    printf("%ld\n", error.length);
    print.logger(error.value);
    return (0);
}