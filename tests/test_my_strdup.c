/*
** EPITECH PROJECT, 2025
** TEST_MY_STRDUP
** File description:
** Test the function my_strdup 
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stdlib.h"
#include <stdio.h>

Test(my_strdup, valid_string)
{
    char *s1 = "Hello world";
    char *s2 = my_strdup(s1);

    cr_assert_str_eq(s1, s2);
}

Test(my_strdup, invalid_string)
{
    char *s1 = NULL;
    char *s2 = my_strdup(s1);

    cr_assert_null(s2);
}
