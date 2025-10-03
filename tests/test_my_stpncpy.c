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

Test(my_stpncpy, valid_strings)
{
    char *s1 = "Hello world";
    char s2[12];

    cr_assert_eq(my_stpncpy(s2, s1, 5), &s2[5]);
}

Test(my_stpncpy, invalid_strings)
{
    char *s1 = NULL;
    char s2[12];

    cr_assert_null(my_strcpy(s2, s1));
}

Test(my_stpncpy, string_smaller)
{
    char *s1 = "1";
    char s2[5];

    cr_assert_str_eq(my_stpncpy(s2, s1, 5), &s2[2]);
}
