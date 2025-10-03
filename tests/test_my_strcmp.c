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

Test(my_strcmp, first_str_bigger)
{
    char *s1 = "hello you dumbass";
    char *s2 = "kiwa";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}

Test(my_strcmp, second_str_bigger)
{
    char *s1 = "fezff";
    char *s2 = "lfezflezlflzefez";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}

Test(my_strcmp, same_str)
{
    char *s1 = "Hello world";
    char *s2 = "Hello world";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}

Test(my_strcmp, same_but_one_letter_different)
{
    char *s1 = "Hella";
    char *s2 = "Hello";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}
