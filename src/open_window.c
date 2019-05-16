/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** open_window
*/

#include "../include/header.h"

void    open_window(sfRenderWindow *w, timecheck_t *t, elem_t **s)
{
    t->time = sfClock_getElapsedTime(t->clock);
    t->seconds = t->time.microseconds / 1000000.0;
    sfRenderWindow_clear(w, sfBlack);
    display_sprites(s, w, t);
    move_sprites(s);
}