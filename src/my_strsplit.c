/*
** EPITECH PROJECT, 2025
** MY_STR_SPLIT
** File description:
** Split the str into an array of non blank string.
*/
#include "my.h"
#include "stdio.h"

static int is_alphanum(char c)
{
    return c != ' ' && c != '\t' && c != '\n';
}

static int count_occ(char const *str)
{
    int i = 0;
    int length = 0;

    for (; str[i]; i++) {
        if ((!i && is_alphanum(str[i])) || (i && is_alphanum(str[i])
            && !is_alphanum(str[i - 1]))) {
            length++;
        }
    }
    return length;
}

static int cust_len(char *str)
{
    int i = 0;

    for (; str[i] && is_alphanum(str[i]); i++);
    return i;
}

char **my_strsplit(char const *str)
{
    int str_word = count_occ(str);
    char *temp = (char *) str;
    char **dest = malloc(sizeof(char *) * (str_word + 1));
    int size = 0;

    for (int i = 0; i < str_word; i++) {
        while (!is_alphanum(temp[0]))
            temp++;
        size = cust_len(temp);
        dest[i] = my_strndup(temp, size);
        temp += size;
    }
    dest[str_word] = (void *) 0;
    return dest;
}
