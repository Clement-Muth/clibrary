/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init print struct
*/

#include "../includes/index.h"

console init_console()
{
    console print;

    print.warn = warn;
    print.logger = logger;
    print.error = error;
    return (print);
}