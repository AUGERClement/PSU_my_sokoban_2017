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
	char *buffer;
	char **map;
	player_t *pos;

	buffer = bufferize_file(filepath);
	check_map(buffer);
	map = convert_arr(buffer);
	pos = init_screen_n_player(map);
	while (map != NULL) {
		clear();
		i = need_enlarge(map);
		if (i == 0)
			my_putarr_ncurses(map);
		map = get_param(getch(), map, filepath, pos);
		refresh();
		//is_over(map);
	}
	endwin();
}

char **get_param(int key, char **map, char *filepath, player_t *pos)
{
	switch (key) {
	case (KEY_UP):
		map = manage_key_up(map, pos);
		break;
	case (KEY_DOWN):
		map = manage_key_down(map, pos);
		break;
	case (KEY_RIGHT):
		map = manage_key_right(map, pos);
		break;
	case (KEY_LEFT):
		map = manage_key_left(map, pos);
		break;
	case (' '):
		free_map(map);
		reset(filepath);
		return (NULL);
	}
	return (map);
}

void free_map(char **map)
{
	int i = 0;

	while (map[i] != NULL) {
		free(map[i]);
		i++;
	}
}

void reset(char *filepath)
{
	clear();
	endwin();
	sokoban(filepath);
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
