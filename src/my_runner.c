/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "../include/header.h"

void    my_runner(void)
{
    sfRenderWindow *window = create_win("MY RUNNER");
    sfMusic *music = sfMusic_createFromFile("resources/song.ogg");
    sfEvent event;
    int var = 0;
    float pts = 0;
    elem_t **scroll = init_scroll();
    timecheck_t *timer = set_timer();
    score_t *score = set_score();

    /*sfMusic_play(music);*/
    while (sfRenderWindow_isOpen(window)) {
        events(window, event, &var);
        jump(&var, scroll[5]);
        open_window(window, timer, scroll);
        draw_text(window, score, pts);
        get_obstacle(window, (int)pts, scroll);
        sfRenderWindow_display(window);
        pts += 0.05;
    }
    destroy_elem(scroll, timer, music, window);
}