/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** struct_destroy
*/

#include "../include/header.h"

void    destroy_scroll(elem_t **scroll)
{
    int i = 0;

    while (scroll[i]) {
        free(scroll[i]->sprite);
        free(scroll[i]->texture);
        free(scroll[i]);
        i++;
    }
    free(scroll);
}

void    destroy_timer(timecheck_t *timer)
{
    free(timer->clock);
    free(timer);
}