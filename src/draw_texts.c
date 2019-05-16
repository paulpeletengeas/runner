/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** draw_texts
*/

#include "../include/header.h"

void    draw_text(sfRenderWindow *win, score_t *score, float pts)
{
    sfText_setString(score->text1, my_stringer((int)pts));
    sfRenderWindow_drawText(win, score->text1, NULL);
    sfRenderWindow_drawText(win, score->text2, NULL);
}