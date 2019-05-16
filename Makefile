##
## EPITECH PROJECT, 2019
## MUL_my_runner_2018
## File description:
## Makefile
##

NAME	= my_runner

CC	= gcc

RM	= rm -f

LIBFLAGS =	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

SRCS	= ./main.c \
	  ./src/check_flag.c \
	  ./src/create_win.c \
	  ./src/display_sprites.c \
	  ./src/events.c \
	  ./src/init_scroll.c \
	  ./src/move_rect.c \
	  ./src/my_runner.c \
	  ./src/my_stringer.c \
	  ./src/open_window.c \
	  ./src/set_position.c \
	  ./src/set_score.c \
	  ./src/set_speed.c \
	  ./src/set_sprites.c \
	  ./src/set_textures.c \
	  ./src/set_timer.c \
	  ./src/struct_destroy.c \
	  ./src/jump.c \
	  ./src/destroy_elem.c \
	  ./src/draw_texts.c \
	  ./src/get_obstacle.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) $(LIBFLAGS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
