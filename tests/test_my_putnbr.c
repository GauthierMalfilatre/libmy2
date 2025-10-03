/*
** EPITECH PROJECT, 2025
** TEST_MY_PUTNBR
** File description:
** Test the function my_putnbr 
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

Test(my_putnbr, return_value_positive)
{
    int nb = 876;
    int size_of_number = my_putnbr(nb);

    cr_assert_eq(size_of_number, 3);
}

Test(my_putnbr, return_value_negative)
{
    int nb = -876986;
    int size_of_number = my_putnbr(nb);

    cr_assert_eq(size_of_number, 7);
}

Test(my_putnbr, return_value_zero)
{
    int nb = 0;
    int size_of_number = my_putnbr(nb);

    cr_assert_eq(size_of_number, 1);
}

Test(my_putnbr, put_valid_positive_nbr, .init = redirect_all_stdout)
{
    int nb = 3560;

    my_putnbr(nb);
    fflush(stdout);
    cr_assert_stdout_eq_str("3560");
}

Test(my_putnbr, put_valid_negative_nbr, .init = redirect_all_stdout)
{
    int nb = -7;

    my_putnbr(nb);
    fflush(stdout);
    cr_assert_stdout_eq_str("-7");
}

Test(my_putnbr, put_int_max, .init = redirect_all_stdout)
{
    int nb = 2147483647;

    my_putnbr(nb);
    fflush(stdout);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_putnbr, put_int_min, .init = redirect_all_stdout)
{
    int nb = -2147483648;

    my_putnbr(nb);
    fflush(stdout);
    cr_assert_stdout_eq_str("-2147483648");
}

Test(my_putnbr, put_zero, .init = redirect_all_stdout)
{
    int nb = 0;

    my_putnbr(nb);
    fflush(stdout);
    cr_assert_stdout_eq_str("0");
}
