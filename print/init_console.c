/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init print struct
*/

#include "../includes/index.h"
#include "includes/functions_pointer.h"

console init_console()
{
    console print;

    print.warn = warn;
    print.logger = logger;
    print.error = error;
    return (print);
}