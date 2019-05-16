/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** check_flag
*/

#include "../include/header.h"

void    print_help(void)
{
    printf("yo");
}

int    check_flag(char *str)
{
    if (str[0] == '-' && str[1] == 'h' && str[2] == '\0') {
        print_help();
        exit(0);
    }
    return (0);
}