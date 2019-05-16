/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set_textures
*/

#include "../include/header.h"

elem_t    **set_textures(elem_t **scroll)
{
    scroll[0]->texture = sfTexture_createFromFile("resources/layer1.png", NULL);
    scroll[1]->texture = sfTexture_createFromFile("resources/layer2.png", NULL);
    scroll[2]->texture = sfTexture_createFromFile("resources/layer3.png", NULL);
    scroll[3]->texture = sfTexture_createFromFile("resources/layer4.png", NULL);
    scroll[4]->texture = sfTexture_createFromFile("resources/layer5.png", NULL);
    scroll[5]->texture = sfTexture_createFromFile("resources/dog.png", NULL);
    scroll[6]->texture = sfTexture_createFromFile("resources/spike.png", NULL);
    return (scroll);
}