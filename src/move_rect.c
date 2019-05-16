/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** move_rect
*/

#include "../include/header.h"

elem_t    *move_rect(elem_t *dog, timecheck_t *timer)
{
    if (timer->seconds >= 0.08) {
        if (dog->rect.left < dog->max_value)
            dog->rect.left += dog->offset;
        else if (dog->rect.left >= dog->max_value)
            dog->rect.left = 0;
        sfClock_restart(timer->clock);
    }
    return (dog);
}