/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set_position
*/

#include "../include/header.h"

elem_t    *set_dog(elem_t *dog)
{
    dog->pos.x = 0;
    dog->pos.y = 498;
    dog->scale.x = 0.5;
    dog->scale.y = 0.5;
    dog->rect.width = 547;
    dog->rect.height = 481;
    dog->rect.left = 0;
    dog->rect.top = 0;
    dog->offset = 547;
    dog->max_value = 547 * 7;
    return (dog);
}

elem_t    **set_position(elem_t **scroll)
{
    int i = 0;

    while (i <= 4) {
        scroll[i]->pos.x = 0;
        i++;
    }
    scroll[i] = set_dog(scroll[i]);
    scroll[i + 1]->pos.x = 1920;
    scroll[i + 1]->pos.y = 600;
    return (scroll);
}