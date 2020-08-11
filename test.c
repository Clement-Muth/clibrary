/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** test
*/

#include "includes/index.h"

#define _FINDNF(item, arr, index, arr_length, prediction, func) ({\
    array_s (*action)(string item, int index) = func;\
    for (int i = 0; i < arr_length; i++)\
        if (arr.string[i].match(arr.string[i], prediction)) action(arr.string[i], i);\
})

/**
 * Performs the specified action for each element in an array.
 * @param item Variable coontaining each cases.
 * @param *arr Array to perform action.
 * @param index Index in the array.
 * @param prediction Block that contains the prediction.
 * @param body Action for finded element.
 */
#define F(item, arr, index, prediction, body) ({\
    _FINDNF(item, arr, index, 2, prediction,\
    _LAMBDA(array_s, (string item, int index) body));\
    arr;\
})

int main(void)
{
    // console console = init_console();
    array_s type = create_array_s((const char *[]){"string", "number", '\0'});

    type.find(F(element, type, i, "string", {
        printf("%d %s\n", i, element.value);
    }));
    return 0;
}