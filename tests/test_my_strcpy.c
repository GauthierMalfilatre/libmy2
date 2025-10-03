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

Test(my_strcpy, valid_strings)
{
    char *s1 = "Hello world";
    char s2[12];

    (void)my_strcpy(s2, s1);
    cr_assert_str_eq(s1, s2);
}

Test(my_strcpy, invalid_strings)
{
    char *s1 = NULL;
    char s2[12];

    cr_assert_null(my_strcpy(s2, s1));
}
