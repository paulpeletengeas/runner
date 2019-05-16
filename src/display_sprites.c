/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** display_sprites
*/

#include "../include/header.h"

elem_t    **check_position(elem_t **scroll)
{
    int i = 0;

    while (i <= 4) {
        if (scroll[i]->pos.x <= -1920)
            scroll[i]->pos.x = 0;
        i++;
    }
    return (scroll);
}

void    move_sprites(elem_t **scroll)
{
    int i = 0;
    while (i <= 4) {
        scroll[i]->pos.x -= scroll[i]->speed;
        i++;
    }
    scroll = check_position(scroll);
}

void    display_dog(elem_t *dog, sfRenderWindow *win)
{
    sfSprite_setScale(dog->sprite, dog->scale);
    sfSprite_setPosition(dog->sprite, dog->pos);
    sfSprite_setTextureRect(dog->sprite, dog->rect);
    sfRenderWindow_drawSprite(win, dog->sprite, NULL);
}

void    display_sprites(elem_t **scroll, sfRenderWindow *win, timecheck_t *t)
{
    int i = 0;

    while (i <= 4) {
        sfSprite_setPosition(scroll[i]->sprite, scroll[i]->pos);
        sfRenderWindow_drawSprite(win, scroll[i]->sprite, NULL);
        scroll[i]->pos.x += 1920;
        sfSprite_setPosition(scroll[i]->sprite, scroll[i]->pos);
        sfRenderWindow_drawSprite(win, scroll[i]->sprite, NULL);
        scroll[i]->pos.x -= 1920;
        i++;
    }
    scroll[i] = move_rect(scroll[i], t);
    display_dog(scroll[i], win);
}