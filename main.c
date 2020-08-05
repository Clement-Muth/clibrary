/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** main
*/

#include "includes/index.h"

int main(void)
{
    print_t print = init_print();
    string error = init_string();
    
    print.error("problem occured\n");
    return 0;
}