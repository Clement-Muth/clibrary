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
    string_t *string2 = new_string("string");

    string->insert(string, 0, string2);
    string->print(string);
    return (0);
}