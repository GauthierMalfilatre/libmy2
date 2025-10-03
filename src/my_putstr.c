/*
** EPITECH PROJECT, 2025
** MY_PUTSR
** File description:
** Display a string
*/
#include "my.h"

size_t my_putstr(char const *str)
{
    if (!str) {
        return 0;
    }
    return write(1, str, my_strlen(str));
}
