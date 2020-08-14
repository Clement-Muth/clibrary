/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** push
*/

#include "includes/index.h"
#include <stdarg.h>

static number push_chaine(const void *src)
{
}

static number push_string(const void *src)
{
    const string copy_src = *((string *)src);
    // const array_s new_array = new_string_a(

    // );
}

number push(array_s *array, const void *item, ...)
{
    const bool type = GET({
        return (!((string *)item)->value) ? true : false;
    });
    number(*push_fct[(type) ? 0 : 1]);
}