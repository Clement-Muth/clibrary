/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** write string in 1 output
*/

#include "includes/index.h"
#include "../utils/includes/index.h"
#include "../includes/constant.h"
#include <stdlib.h>
#include <stdarg.h>

static void print_string(const void *data, int type)
{
    const string_t new_data = *((string_t *)data);

    my_putstr(type == -1 ? new_data.str : (char *)data, 1);
    my_putchar('\n', 1);
}

static void print_number(const void *data, int type)
{
    const number_t new_data = *((number_t *)data);

    my_putstr(my_itoa(new_data.value), 1);
    my_putchar('\n', 1);
}

static void (*type_array[])(const void *data, int type) = {
    print_string,
    print_number
};

void (logger)(const void *data, int n_args, ...)
{
    va_list list;
    int type = 0;

    va_start(list, n_args);
    if (n_args) {
        type = va_arg(list, int);
        type_array[type](data, type);
    } else
        type_array[get_type(data)](data, -1);
    va_end(list);
}
