/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** Outputs a warning message.
*/

#include "includes/index.h"

static void warn_string(const void *data)
{
    const string new_data = *((string *)data);
}

static void warn_number(const void *data)
{
    const number new_data = *((number *)data);
}

static void (*printing_fct[])(const void *data) =
{
    warn_string,
    warn_number
};

void warn(const void *data)
{
    array_s type = create_array_s((const char **){"string", "number"});

    if (!((string *)data)->type && !((number *)data)->type)
        return;
    for (int i = 0; type.string[i].value; i++)
        printf("%s\n", type.string[i].value);
        
    // if (my_strcmp(((string *)data)->type, "string") == 0)
    //     printf("Its a string\n");
    // if (my_strcmp(((number *)data)->type, "number") == 0)
    //     printf("Its a number\n");

    // printf("%s\n", ((number *)data)->type);
    // print_color("warning ", "\033[1;33m", STAND_OUTPUT);
    // for (int i = 0; ((char *)data)[i]; i++)
    //     print(((char *)data)[i], STAND_OUTPUT);
    // return my_strlen(data);
}