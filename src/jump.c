/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** jump
*/

#include "../include/header.h"

void    jump(int *var, elem_t *scroll)
{
    if (*var > 0) {
        scroll->pos.y -= 3;
        *var += 1;
        scroll->rect.left = 0;
    }
    if (*var >= 100) {
        scroll->pos.y += 6;
        if (scroll->pos.y == 498)
            *var = 0;
    }
}