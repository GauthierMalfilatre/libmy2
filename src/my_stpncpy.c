/*
** EPITECH PROJECT, 2025
** MY_STPNCPY
** File description:
** Copy n bytes of the source string into the dest and return his
** null byte.
*/
#include "my.h"

char *my_stpncpy(char *dest, char const *src, int n)
{
    if (!dest || !src) {
        return NULL;
    }
    my_strncpy(dest, src, n);
    for (; *dest; dest++);
    return dest;
}
