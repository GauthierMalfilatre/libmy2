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

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putchar, return_value)
{
    cr_assert_eq(my_putchar('c'), 1);
}

Test(my_putchar, put_valid_char, .init = redirect_all_stdout)
{
    char c = 'z';

    my_putchar(c);
    fflush(stdout);
    cr_assert_stdout_eq_str(&c);
}
