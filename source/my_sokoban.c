/*
** EPITECH PROJECT, 2017
** sokoban.c
** File description:
** display file then activate game mode
*/

#include <stdlib.h>
#include <ncurses.h>
#include "sokoban.h"
#include "my.h"

void sokoban(char *filepath)
{
	int i;
	char *buffer = bufferize_file(filepath);
	char **map = convert_arr(buffer);
	int number_of_boxes = check_map(buffer);
	player_t *pos = init_screen_n_player(map);
	box_t **boxes = init_boxes(map, number_of_boxes);

	while (map != NULL) {
		clear();
		i = need_enlarge(map);
		if (i == 0)
			my_putarr_ncurses(map);
		map = get_param(map, filepath, pos, boxes);
		refresh();
		can_continue(map, boxes, pos);
	}
}

char **get_param(char **map, char *filepath, player_t *pos, box_t **boxes)
{
	switch (getch()) {
	case (KEY_UP):
		map = manage_key_up(map, pos, boxes);
		break;
	case (KEY_DOWN):
		map = manage_key_down(map, pos, boxes);
		break;
	case (KEY_RIGHT):
		map = manage_key_right(map, pos, boxes);
		break;
	case (KEY_LEFT):
		map = manage_key_left(map, pos, boxes);
		break;
	case (' '):
		free_soko(map, boxes, pos);
		sokoban(filepath);
		return (NULL);
	}
	return (map);
}

player_t *init_screen_n_player(char **map)
{
	player_t *pos = malloc(sizeof(player_t));

	initscr();
	keypad(stdscr, TRUE);
	cbreak();
	noecho();
	pos->x = get_player_x(map);
	pos->y = get_player_y(map[pos->x]);
	pos->is_storage = 0;
	return (pos);
}
