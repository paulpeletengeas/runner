/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** header
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_elem {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    sfVector2f scale;
    int life;
    float speed;
    int offset;
    int max_value;
} elem_t;

typedef struct s_timecheck {
    sfClock *clock;
    sfTime time;
    float seconds;
} timecheck_t;

typedef struct s_score {
    sfFont *font;
    sfText *text1;
    sfText *text2;
} score_t;

void    my_runner(void);
sfRenderWindow    *create_win(char *t);
void    open_window(sfRenderWindow *win, timecheck_t *t, elem_t **s);
void    events(sfRenderWindow *win, sfEvent event, int *var);
elem_t    **init_scroll();
elem_t    **set_sprites(elem_t **scroll);
elem_t    **set_textures(elem_t **scroll);
elem_t    **set_speed(elem_t **scroll);
elem_t    **set_position(elem_t **scroll);
score_t    *set_score(void);
void    display_sprites(elem_t **s, sfRenderWindow *w, timecheck_t *t);
void    move_sprites(elem_t **scroll);
int    check_flag(char *str);
elem_t    *move_rect(elem_t *dog, timecheck_t *timer);
timecheck_t    *set_timer(void);
void    destroy_scroll(elem_t **scroll);
void    destroy_timer(timecheck_t *timer);
int    my_digits(int nb);
char    *my_stringer(int nb);
void    jump(int *var, elem_t *scroll);
void    destroy_elem(elem_t **s, timecheck_t *t, sfMusic *m, sfRenderWindow *w);
void    draw_text(sfRenderWindow *win, score_t *score, float pts);
void    get_obstacle(sfRenderWindow *win, int pts, elem_t **scroll);