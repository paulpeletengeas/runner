/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** destroy_elem
*/

#include "../include/header.h"

void    destroy_elem(elem_t **s, timecheck_t *t, sfMusic *m, sfRenderWindow *w)
{
    destroy_scroll(s);
    destroy_timer(t);
    sfRenderWindow_destroy(w);
    sfMusic_destroy(m);
}