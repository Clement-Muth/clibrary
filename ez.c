/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** ez
*/

#include <stdio.h>
#include "includes/index.h"

#define range(...) range((console){.error = error, .logger = logger, .warn = warn})

/* use parentheses to avoid macro subst */
void(range)(console console)
{
    console.error("test");
}

int main()
{
    range();
}