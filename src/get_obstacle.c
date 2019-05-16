/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** get_obstacle
*/

#include "../include/header.h"

void    get_obstacle(sfRenderWindow *win, int pts, elem_t **scroll)
{
    scroll[6]->pos.x -= scroll[6]->speed;
    scroll[6]->scale.x = 0.7;
    scroll[6]->scale.y = 0.7;
    sfSprite_setScale(scroll[6]->sprite, scroll[6]->scale);
    sfSprite_setPosition(scroll[6]->sprite, scroll[6]->pos);
    sfRenderWindow_drawSprite(win, scroll[6]->sprite, NULL);
    if (scroll[6]->pos.x <= -150)
        scroll[6]->pos.x = 1920;
}