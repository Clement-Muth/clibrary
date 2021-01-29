/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** Outputs a warning message.
*/

#include "includes/index.h"
#include "../utils/includes/index.h"
#include "../includes/constant.h"
#include "../types/string/includes/structs.h"
#include "../types/number/includes/structs.h"
#include "../types/array/string/includes/structs.h"
#include "../types/array/string/includes/macro.h"
#include "../includes/macro.h"

static int write_warn_string(const char *message)
{
    print_color("warning ", "\033[1;33m", STAND_OUTPUT);
    for (int i = 0; message[i]; i++)
        my_putchar(message[i], STAND_OUTPUT);
    return my_strlen(message);
}

void warn(const void *data)
{
    if (!((string_t *)data)->type && !((number_t *)data)->type)
        return;
    if (my_strcmp(((string_t *)data)->type, "string") == 0)
        write_warn_string(((string_t *)data)->value);
    if (my_strcmp(((array_s *)data)->type, "array_s") == 0)
        ((array_s *)data)->foreach(E(message, ((array_s*)data), i, {
            write_warn_string(message.value);
            my_putchar('\n', 2);
        }));
}