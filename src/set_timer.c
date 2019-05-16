/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set_timer
*/

#include "../include/header.h"

timecheck_t    *set_timer(void)
{
    timecheck_t *timer = malloc(sizeof(timecheck_t));

    timer->clock = sfClock_create();
    timer->seconds = 0;
    return (timer);
}