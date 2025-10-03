/*
** EPITECH PROJECT, 2025
** MY_H
** File description:
** Header file for libmy
*/
#ifndef LIB_MY_H
    #define LIB_MY_H
    #define ABS(a) (((a) > 0) ? (a) : (-(a)))
    #define MAX(a, b) ((x) > (y) ? (x) : (y))
    #define MIN(a, b) ((x) > (y) ? (y) : (x))
    #include <unistd.h>

// Put functions
size_t my_putchar(char c);
size_t my_putnbr(int nb);
size_t my_putstr(char const *str);

// String functions
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);

// Len functions
size_t my_strlen(char const *str);

// Other functions
void my_swap(int *a, int *b);

#endif /* LIB_MY_H */
