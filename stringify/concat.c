/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** concat
*/

#include "includes/index.h"
#include <stdlib.h>
#include <stdio.h>

char *concat(string *string, const char *src)
{
  int i = 0;
  int j = 0;
  int cont = 0;
  int h = my_strlen(string->value) + my_strlen(src) + 1;
  char *result = (char*)malloc(h * sizeof(char));

  for(i = 0; i < (int)my_strlen(string->value); i++)
    result[i] = string->value[i];
  for(j = i; j < (int)(my_strlen(src) + my_strlen(string->value)); j++)
    result[j] = src[cont++];
  result[h - 1] = '\0';
  string->value = result;
  string->length = my_strlen(string->value);
  return (result);
}