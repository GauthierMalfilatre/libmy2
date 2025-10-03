/*
** EPITECH PROJECT, 2025
** TEST_MY_PUTCHAR
** File description:
** Test the function my_putchar 
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stdlib.h"
#include <stdio.h>

Test(my_swap, two_random_number)
{
    int a= 67;
    int b = 7839;
    int a_ = a;
    int b_ = b;

    my_swap(&a, &b);
    cr_assert((a == b_ && b == a_));
}
