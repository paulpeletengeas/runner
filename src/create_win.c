/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** create_win
*/

#include "../include/header.h"

sfRenderWindow    *create_win(char *t)
{
    sfVideoMode m = {1920, 900, 128};
    sfRenderWindow *wi = sfRenderWindow_create(m, t, sfClose | sfResize, NULL);
    return (wi);
}