/*
** EPITECH PROJECT, 2025
** MY_PUTCHAR
** File description:
** Display a char
*/
#include "my.h"

size_t my_putchar(char c)
{
    return write(1, &c, 1);
}
