/*
** EPITECH PROJECT, 2025
** TEST_MY_STRNPCY
** File description:
** Test the function my_strndpy 
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stdlib.h"
#include <stdio.h>

Test(my_strncpy, valid_strings)
{
    char *s1 = "Hello world";
    char s2[12];

    my_strncpy(s2, s1, 5);
    cr_assert(!strncmp(s1, s2, 5));
}

Test(my_strncpy, invalid_strings)
{
    char *s1 = NULL;
    char s2[12];

    cr_assert_null(my_strncpy(s2, s1, 16));
}
