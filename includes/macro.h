/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** macro
*/

#ifndef MACRO_H_
#define MACRO_H_

#define lambda(return_type, function_body)\
    ({ return_type __fn__ function_body __fn__; })
#define foreachnf(item, arr, arr_length, func) {\
    void (*action)(char *item) = func;\
    for (int i = 0; i != arr_length; i++) action(arr->string[i].value);\
}
#define foreachn(item, arr, arr_length, body)\
    foreachnf(item, arr, arr_length, lambda(void, (char *item) body))
#define foreach(item, arr, body)\
    foreachn(item, arr, arr->element, body)

#endif /* !MACRO_H_ */
