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

Test(my_str_to_word_array, basic_test)
{
    char *str = " Hello World Epitech 42";
    char **warray = my_str_to_word_array(str);
    char *expected[] = {"Hello", "World", "Epitech", "42", NULL};

    for (int i = 0; expected[i] != NULL; i++) {
        cr_assert(warray[i] != NULL);
        cr_assert_str_eq(warray[i], expected[i]);
    }
    cr_assert_null(warray[4]);
}

Test(my_str_to_word_array, advanced_test)
{
    char *str = " Hello\\/....???,,,,,____              +++           World \nEpitech      42";
    char **warray = my_str_to_word_array(str);
    char *expected[] = {"Hello", "World", "Epitech", "42", NULL};

    for (int i = 0; expected[i] != NULL; i++) {
        cr_assert(warray[i] != NULL);
        cr_assert_str_eq(warray[i], expected[i]);
    }
    cr_assert_null(warray[4]);
}
