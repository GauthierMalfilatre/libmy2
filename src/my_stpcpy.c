/*
** EPITECH PROJECT, 2025
** MY_STPCPY
** File description:
** Copy the source string into the dest.
*/
#include "my.h"

char *my_stpcpy(char *dest, char const *src)
{
    if (!dest || !src) {
        return NULL;
    }
    my_strcpy(dest, src);
    return &dest[my_strlen(src)];
}
