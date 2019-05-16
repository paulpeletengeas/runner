/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_scroll
*/

#include "../include/header.h"

elem_t    **init_scroll()
{
    int i = 0;
    elem_t **scroll = malloc(7 * sizeof(elem_t *));

    while (i <= 6) {
        scroll[i] = malloc(sizeof(elem_t));
        i++;
    }
    scroll = set_textures(scroll);
    scroll = set_sprites(scroll);
    scroll = set_speed(scroll);
    scroll = set_position(scroll);
    return (scroll);
}