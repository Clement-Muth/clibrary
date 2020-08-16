/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init print struct
*/

#include "includes/structs.h"
#include "includes/functions_pointer.h"

console_t init_console()
{
    console_t print;

    print.warn = warn;
    print.logger = logger;
    print.error = error;
    return (print);
}