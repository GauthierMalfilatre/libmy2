/*
** EPITECH PROJECT, 2025
** MY_STRDUP
** File description:
** Return a duplicated string.
*/
#include "my.h"

char *my_strdup(char const *str)
{
    char *duplicated = NULL;

    if (!str) {
        return NULL;
    }
    duplicated = malloc(sizeof(char) * my_strlen(str) + 1);
    my_strcpy(duplicated, str);
    return duplicated;
}
