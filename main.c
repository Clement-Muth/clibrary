/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** main
*/

#include "library/includes/type.h"

int main(void)
{
    string_t *string = new_string("123");
    string_t *string2 = new_string("string");

    // string->insert(string, 0, string2);
    string->append(string, new_string("\n"));
    string->print(string);
    printf("%d\n", string->compare(string, string2));
    return (0);
}