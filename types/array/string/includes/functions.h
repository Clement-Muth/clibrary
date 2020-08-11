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
array_s create_array_s(const char **values);

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
static inline string find(__attribute__((unused)) const array_s e)
{
    return;
}

#endif /* !ARRAY_S_FUNCTION_H_ */
