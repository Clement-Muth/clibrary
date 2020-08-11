/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** push
*/

#include "includes/index.h"
#include <stdarg.h>

static number push_chaine(void *src)
{
    
}

static number push_string(void *src)
{
    string message = new_string(((string *)src)->value);

    
}

number push(array_s *array, const void *item, ...)
{
    const bool type = GET({
        return (!((string *)item)->value) ? true : false;
    });
    number (*push_fct[])(void *item) = {
        push_string,
        push_chaine
    };

    return (push_fct[(type) ? 1 : 2]);
}