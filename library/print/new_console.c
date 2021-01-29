/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init print struct
*/

#include "includes/structs.h"
#include "includes/index.h"

console_t new_console()
{
    console_t print;

    print.warn = warn;
    print.logger = logger;
    print.error = error;
    return (print);
}