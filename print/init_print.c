/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init print struct
*/

#include "../includes/index.h"

print_t init_print()
{
    print_t print;

    print.warn = warn;
    print.logger = logger;
    print.error = error;
    return (print);
}