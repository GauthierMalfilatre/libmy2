/*
** EPITECH PROJECT, 2025
** MY_STRNDUP
** File description:
** Return a n-byte duplicated string.
*/
#include "my.h"

char *my_strndup(char const *str, int n)
{
    int str_length = 0;
    char *duplicated = NULL;

    if (!str) {
        return NULL;
    }
    duplicated = malloc(sizeof(char) * (MIN(str_length, n) + 1));
    str_length = my_strlen(str);
    my_strncpy(duplicated, str, n);
    duplicated[MIN(str_length, n)] = '\0';
    return duplicated;
}
