/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** re
*/

#include <stdio.h>

#define lambda(return_type, function_body)\
    ({ return_type __fn__ function_body __fn__; })

#define foreachnf(item, arr, arr_length, func) ({\
    char **(*action)(char *item) = func;\
    for (int i = 0; i < arr_length; i++) action(arr[i]);\
})

#define e(item, arr, body) ({\
    foreachnf(item, arr, 2, lambda(char **, (char *item) body));\
    arr;\
})

static inline char **foreach(char **array)
{
    return (array);
}

int main(int argc, char const *argv[])
{
    char *messages[] = {"test", "test2"};

    foreach(e(message, messages, {
        printf("%s\n", message);
    }));
    return 0;
}
