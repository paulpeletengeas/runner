/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set_sprites
*/

#include "../include/header.h"

elem_t    **create_sprites(elem_t **scroll)
{
    int i = 0;

    while (i <= 6) {
        scroll[i]->sprite = sfSprite_create();
        i++;
    }
    return (scroll);
}

elem_t    **set_sprites(elem_t **scroll)
{
    int i = 0;

    scroll = create_sprites(scroll);
    while (i <= 6) {
        sfSprite_setTexture(scroll[i]->sprite, scroll[i]->texture, sfTrue);
        i++;
    }
    return (scroll);
}