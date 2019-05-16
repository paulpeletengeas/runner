/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** set_score
*/

#include "../include/header.h"

score_t    *set_score(void)
{
    score_t *score = malloc(sizeof(score_t));
    sfVector2f pos1;
    pos1.x = 350;
    pos1.y = 780;
    sfVector2f pos2;
    pos2.x = 20;
    pos2.y = 850;
    score->font = sfFont_createFromFile("resources/font.ttf");
    score->text1 = sfText_create();
    score->text2 = sfText_create();
    sfText_setFont(score->text1, score->font);
    sfText_setCharacterSize(score->text1, 85);
    sfText_setFont(score->text2, score->font);
    sfText_setCharacterSize(score->text2, 30);
    sfText_setPosition(score->text1, pos1);
    sfText_setPosition(score->text2, pos2);
    sfText_setString(score->text1, "0");
    sfText_setString(score->text2, "DISTANCE");
    return (score);
}