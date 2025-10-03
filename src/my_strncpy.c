/*
** EPITECH PROJECT, 2025
** MY_STRCPY
** File description:
** Copy the source string into the dest.
*/
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int length = 0;

    if (!dest || !src) {
        return NULL;
    }
    for (; src[length] != '\0' && length < n; length++) {
        dest[length] = src[length];
    }
    for (; length < n; length++)
        dest[length] = '\0';
    return dest;
}
