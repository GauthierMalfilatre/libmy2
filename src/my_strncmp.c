/*
** EPITECH PROJECT, 2025
** MY_STRNCMP
** File description:
** Compare n characters of two string
*/
#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; (s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i] && i < n; i++);
    return (s1[i] - s2[i]);
}
