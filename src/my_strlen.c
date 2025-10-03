/*
** EPITECH PROJECT, 2025
** MY_STRLEN
** File description:
** Return size of str
*/
#include "my.h"

size_t my_strlen(char const *str)
{
    size_t length = 0;

    for (; str[length] != '\0'; length++);
    return length;
}
