/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** test
*/

#include "includes/index.h"
#include "print/includes/functions_pointer.h"
#include <stdarg.h>

#define push_chaine(...)                                                   \
    push_chaine((console){.error = error, .logger = logger, .warn = warn}, \
                __VA_ARGS__)
#define push_string(...)                                                   \
    push_string((console){.error = error, .logger = logger, .warn = warn}, \
                __VA_ARGS__)

static number(push_chaine)(console console, array_s *array, const void *src,
                           const int i)
{
    const int length = (array->length + 1 + (i && 1));
    char **tmp_array = malloc(sizeof(char *) * length);
    array_s new_array;
    string error;

    if (!tmp_array) {
        my_assert_dev(tmp_array != NULL, DESC_ERR_ALLOC_FAILED, ERR_ALC84,
        FAIL_EXEC);
        my_strlen(NULL);
        return (new_number(0));
    }
    array->length = array->length + 1;
    array->foreach(E(el, array, index, {
        if (i == index)
            tmp_array[index] = my_strdup((const char *)src);
        else
            tmp_array[index] = my_strdup(el.value);
    }));
    tmp_array[length] = NULL;
    new_array = new_string_a((const char **)tmp_array);
    return (new_number(new_array.length));
}

static number(push_string)(console console, array_s *array, const void *src,
                           const int i)
{
    const string copy_src = *((string *)src);
    const char **copy_array = (const char **)array->copy(array);
    array_s new_array = new_string_a((const char *[]){
        copy_array, (const char *)src});

    return (new_number(new_array.length));
}

number push(array_s *array, const void *item, ...)
{
    va_list list_l;
    vect2i list;

    va_start(list_l, item);
    list = (vect2i){va_arg(list_l, int), va_arg(list_l, int)};
    return (
        (-1 == (list.x) ? 1 : 0) ?
        push_string(array, item, (list.y) ? list.y : 0) :
        push_chaine(array, item, (list.y) ? list.y : 0)
    );
}

int main(void)
{
    array_s test = new_string_a((const char *[]){"test", "test", '\0'});

    push(&test, "hello");
    return (0);
}