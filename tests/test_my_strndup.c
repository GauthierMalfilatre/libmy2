/*
** EPITECH PROJECT, 2025
** TEST_MY_STRNDUP
** File description:
** Test the function my_strndup 
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stdlib.h"
#include <stdio.h>

Test(my_strndup, valid_string)
{
    char *s1 = "Hello world";
    char *s2 = my_strndup(s1, 5);

    cr_assert(!strncmp(s2, s1, 5));
}

Test(my_strndup, n_bigger)
{
    char *s1 = "1";
    char *s2 = my_strndup(s1, 89);

    cr_assert(!strcmp(s1, s2));
}

Test(my_strndup, null_string)
{
    char *s1 = NULL;
    char *s2 = my_strndup(s1, 89);

    cr_assert_null(s2);
}
