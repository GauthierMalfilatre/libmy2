/*
** EPITECH PROJECT, 2025
** MY_SWAP
** File description:
** Swap 2 ints
*/
#include "my.h"

void my_swap(int *a, int *b)
{
    *b = *a ^ *b;
    *a = *b ^ *a;
    *b = *a ^ *b;
    return;
}
