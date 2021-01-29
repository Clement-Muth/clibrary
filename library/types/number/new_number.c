/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init_number
*/

#include "includes/index.h"
#include <stdio.h>
#include <stdlib.h>

number_t new_number(const int value)
{
    number_t number;

    number.value = value;
    number.type = "number";
    return (number);
}