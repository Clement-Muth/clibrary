/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** main
*/

#include "library/includes/type.h"

int main(void)
{
    string_t *string = new_string(NULL);
    string_t *string2 = new_string("string");

    string->assign(NULL, string2);
    return (0);
}