/*
** EPITECH PROJECT, 2025
** MY_H
** File description:
** Header file for libmy
*/
#ifndef LIB_MY_H
    #define LIB_MY_H
    #define ABS(a) (((a) > 0) ? (a) : (-(a)))
    #define MAX(a, b) ((a) > (b) ? (a) : (b))
    #define MIN(a, b) ((a) > (b) ? (b) : (a))
    #include <unistd.h>
    #include <stdlib.h>

// Put functions
size_t my_putchar(char c);
size_t my_putnbr(int nb);
size_t my_putstr(char const *str);

// String functions
// Comparison
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);

// Copy
char *my_stpcpy(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_stpncpy(char *dest, char const *src, int n);
char *my_strncpy(char *dest, char const *src, int n);

// Duplication
char *my_strdup(char *str);
char *my_strndup(char *str, int n);

// Len functions
size_t my_strlen(char const *str);

// Other functions
void my_swap(int *a, int *b);

#endif /* LIB_MY_H */
