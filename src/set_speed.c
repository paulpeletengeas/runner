/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set_speed
*/

#include "../include/header.h"

elem_t    **set_speed(elem_t **scroll)
{
    int i = 0;
    float speed = 0.4;

    while (i <= 4) {
        scroll[i]->speed = speed;
        speed *= 1.6;
        i++;
    }
    scroll[6]->speed = scroll[4]->speed;
    return (scroll);
}