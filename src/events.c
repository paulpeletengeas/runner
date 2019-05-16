/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** events
*/

#include "../include/header.h"

void    events(sfRenderWindow *win, sfEvent event, int *var)
{
    while (sfRenderWindow_pollEvent(win, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(win);
        }
        if (sfKeyboard_isKeyPressed(sfKeySpace) && *var == 0) {
            *var = 1;
        }
    }
}