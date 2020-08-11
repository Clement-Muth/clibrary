/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** macro
*/

#ifndef ARRAY_S_MACRO_H_
#define ARRAY_S_MACRO_H_

#define _LAMBDA(return_type, function_body)\
    ({ return_type __fn__ function_body __fn__; })

#define _FOREACHNF(item, index, arr, arr_length, func) ({\
    array_s (*action)(string item, int index) = func;\
    for (int i = 0; i < arr_length; i++) action((*arr).string[i], i);\
})

/**
 * Performs the specified action for each element in an array.
 * @param item Variable coontaining each cases.
 * @param *arr Array to perform action.
 * @param body Action for each element.
 * @param index Index in the array. 
 */
#define E(item, arr, index, body) ({\
    _FOREACHNF(item, index, arr, 2, _LAMBDA(void, (string item, int index) body));\
    arr;\
})


#endif /* !ARRAY_S_MACRO_H_ */