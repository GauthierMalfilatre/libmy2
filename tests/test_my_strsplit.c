/*
** EPITECH PROJECT, 2025
** TEST_MY_STRSPLIT
** File description:
** Test the function my_strsplit 
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stdlib.h"
#include <stdio.h>

Test(my_strsplit, basic_test)
{
    char *str = " Hello World Epitech 42";
    char **warray = my_strsplit(str);
    char *expected[] = {"Hello", "World", "Epitech", "42", NULL};

    for (int i = 0; expected[i] != NULL; i++) {
        cr_assert(warray[i] != NULL);
        cr_assert_str_eq(warray[i], expected[i]);
    }
    cr_assert_null(warray[4]);
}

Test(my_strsplit, advanced_test)
{
    char *str = " Hello\\/....???,,,,,____              +++           World \nEpitech      42";
    char **warray = my_strsplit(str);
    char *expected[] = {"Hello\\/....???,,,,,____", "+++", "World", "Epitech", "42", NULL};

    for (int i = 0; expected[i] != NULL; i++) {
        cr_assert(warray[i] != NULL);
        cr_assert_str_eq(warray[i], expected[i]);
    }
    cr_assert_null(warray[5]);
}
