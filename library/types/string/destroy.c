/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** destroy
*/

#include "includes/index.h"
#include <string.h>

void string_destroy(string_t *this)
{
    if (this->str) free(this->str);
}