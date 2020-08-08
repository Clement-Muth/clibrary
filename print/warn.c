/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** Outputs a warning message.
*/

#include "includes/index.h"

static int write_warn_string(const char *message)
{
    print_color("warning ", "\033[1;33m", STAND_OUTPUT);
    for (int i = 0; message[i]; i++)
        print(message[i], STAND_OUTPUT);
    return my_strlen(message);
}

void warn(const void *data)
{
    array_s type = create_array_s((const char *[]){"string", "number", '\0'});

    if (!((string *)data)->type && !((number *)data)->type)
        return;
    if (my_strcmp(((string *)data)->type, "string") == 0)
        write_warn_string(((string *)data)->value);
    // if (my_strcmp(((number *)data)->type, "number") == 0)
    //     write_warn_number(((number *)data)->value);
    if (my_strcmp(((array_s *)data)->type, "array_s") == 0)
        foreach(message, ((array_s *)data), {
            write_warn_string(message);
            print('\n', 2);
        });
}