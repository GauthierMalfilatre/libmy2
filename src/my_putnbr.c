/*
** EPITECH PROJECT, 2025
** MY_PUTNBR
** File description:
** Display a number
*/
#include "my.h"

static size_t my_put_positive_nbr(int nb)
{
    size_t total = 0;

    if (nb / 10 > 0) {
        total += my_put_positive_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    return total + 1;
}

static size_t my_put_negative_nbr(int nb)
{
    size_t total = 0;

    if (nb / 10 < 0) {
        total += my_put_negative_nbr(nb / 10);
    }
    my_putchar((-1 * (nb + 1)) % 10 + '1');
    return total + 1;
}

size_t my_putnbr(int nb)
{
    size_t total = 0;

    if (nb < 0) {
        total = my_putchar('-') + my_put_negative_nbr(nb);
    } else {
        total = my_put_positive_nbr(nb);
    }
    return total;
}
