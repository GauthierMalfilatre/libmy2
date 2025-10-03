/*
** EPITECH PROJECT, 2025
** TEST_MY_PUTSTR
** File description:
** Test the function my_putstr 
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stdlib.h"
#include <stdio.h>

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putstr, return_value)
{
    char *str = "Hello world";
    int size_of_str = my_putstr(str);

    cr_assert_eq(size_of_str, strlen(str));
}

Test(my_putstr, put_valid_str, .init = redirect_all_stdout)
{
    char *str = "Hello world";

    my_putstr(str);
    fflush(stdout);
    cr_assert_stdout_eq_str(str);
}

Test(my_putstr, null_str)
{
    char *str = NULL;

    int size_of_str = my_putstr(str);
    cr_assert_eq(size_of_str, 0);
}
