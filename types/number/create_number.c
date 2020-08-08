/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init_number
*/

#include "includes/index.h"
#include <stdio.h>
#include <stdlib.h>

number create_number(const int value)
{
    number number;

    number.value = value;
    number.type = "number";
    return (number);
}