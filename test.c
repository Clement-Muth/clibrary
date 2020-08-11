/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** test
*/

#include "includes/index.h"

int main(void)
{
    array_s test = create_array_s((const char *[]){"test", "test", '\0'});

    push(&test, "hey", 2);
    return (0);
}