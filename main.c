/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** main
*/

#include "library/includes/type.h"

int main(void)
{
    string_t *string = new_string("test");

    string->print(string);
    return (0);
}