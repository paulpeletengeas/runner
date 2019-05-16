/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** my_stringer
*/

#include "../include/header.h"


char    *my_revstr(char *str)
{
    int x = 0;
    int y = 0;
    char temp;

    while (str[y + 1] != '\0') {
        y++;
    }
    while (y > x) {
        temp = str[y];
        str[y] = str[x];
        str[x] = temp;
        x++;
        y--;
    }
    return (str);
}

char    *my_stringer(int nb)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * 15);

    while (nb > 0) {
        dest[i] = nb % 10 + 48;
        nb /= 10;
        i++;
    }
    dest[i] = '\0';
    return (my_revstr(dest));
}