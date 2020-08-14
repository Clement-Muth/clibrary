/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** function
*/

#ifndef ARRAY_S_FUNCTION_H_
#define ARRAY_S_FUNCTION_H_

/**
 * Returns a struct that contains the number object.
 * @param values The values of the array
 */
array_s new_string_a(const char **values);

/**
 * Returns array after performing.
 * @param e New Array
 */
static inline void foreach(__attribute__((unused)) const array_s *e)
{
    return;
}

/**
 * Returns the value of the first element in the array where predicate is true,
 * and undefined otherwise.
 * @param e->predicate — find calls predicate once for each element of the array,
 * in ascending order, until it finds one where predicate returns true.
 * If such an element is found, find immediately returns that element value.
 * Otherwise, find returns undefined.
 */
static inline void find(__attribute__((unused)) const array_s e)
{
    return;
}

/**
 * Appends new elements to an array, and returns the new length of the array.
 * @param array Array destination.
 * @param item New element of the Array.
 * @param index? Index where the element must be appened.
 */
struct number push(array_s *array, const void *item, ...);

/**
 * Returns a copy of an array as char **.
 * @param array Array to copy.
 */
char **copy(const array_s *array);

#endif /* !ARRAY_S_FUNCTION_H_ */
