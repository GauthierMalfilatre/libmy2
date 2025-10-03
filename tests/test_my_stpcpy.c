/*
** EPITECH PROJECT, 2025
** TEST_MY_STRCPY
** File description:
** Test the function my_strcpy 
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stdlib.h"
#include <stdio.h>

Test(my_stpcpy, valid_strings)
{
    char *s1 = "Hello world";
    char s2[12];

    my_stpcpy(s2, s1);
    cr_assert_str_eq(s1, s2);
}

Test(my_stpcpy, invalid_strings)
{
    char *s1 = NULL;
    char s2[12];

    cr_assert_null(my_stpcpy(s2, s1));
}

Test(my_stpcpy, return_value)
{
    char *s1 = "Hello world";
    char s2[12];

    cr_assert_str_eq(my_stpcpy(s2, s1), &s2[11]);
}
