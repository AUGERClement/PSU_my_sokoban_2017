/*
** EPITECH PROJECT, 2017
** get_player_pos.c
** File description:
** get player position sokoban
*/

#include <stdlib.h>
#include "sokoban.h"
#include "my.h"

int get_player_x(char **map)
{
	int x = 0;
	int bool = 0;

	while (map[x] != NULL) {
		bool = is_char_in_str('P', map[x]);
		if (bool == 1) {
			return (x);
		}
		x++;
	}
	return (x);
}

int get_player_y(char *line)
{
	int y = 0;

	while (line[y] != 'P') {
		y++;
	}
	return (y);
}
