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

Test(my_strncmp, same_str_until_n)
{
    char *s1 = "helloa";
    char *s2 = "hellow";

    cr_assert_eq(my_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
}

Test(my_strncmp, second_str_bigger)
{
    char *s1 = "hellowal";
    char *s2 = "helloyuj";

    cr_assert_eq(my_strncmp(s1, s2, 7), strncmp(s1, s2, 7));
}

Test(my_strncmp, n_bigger)
{
    char *s1 = "Hello world";
    char *s2 = "Hello world";

    cr_assert_eq(my_strncmp(s1, s2, 87), strncmp(s1, s2, 87));
}

Test(my_strncmp, same_but_one_letter_different)
{
    char *s1 = "Hella";
    char *s2 = "Hello";

    cr_assert_eq(my_strncmp(s1, s2, 5), strncmp(s1, s2, 5));
}

Test(my_strncmp, one_str_is_null)
{
    char *s1 = NULL;
    char *s2 = "Hello";

    cr_assert_null(my_strncmp(s1, s2, 5));
}
