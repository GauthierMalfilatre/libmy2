/*
** EPITECH PROJECT, 2025
** TEST_MY_STRLEN
** File description:
** Test the function my_strlen 
*/
#include "my.h"
#include <criterion/criterion.h>
#include "stdlib.h"

Test(my_strlen, return_value)
{
    char *str = "Hello world";
    int size_of_str = my_strlen(str);

    cr_assert_eq(size_of_str, strlen(str));
}

Test(my_strlen, str_is_null)
{
    char *str = NULL;
    int size_of_str = my_strlen(str);

    cr_assert_eq(size_of_str, 0);
}
