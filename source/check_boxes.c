/*
** EPITECH PROJECT, 2017
** check_boxes.c
** File description:
** if player want to move a box
*/

#include "sokoban.h"

char **check_else_left(char **map, player_t *pos)
{
	if (map[pos->x][pos->y - 1] == 'X') {
		if (map[pos->x][pos->y - 2] == 'X' ||
		    map[pos->x][pos->y - 2] == '#')
			return (map);
		else if (map[pos->x][pos->y - 1] == 'O') {

		} else {
			map = move_box_left(map, pos);
		}
	} else {
		map[pos->x][pos->y - 1] = 'P';
		map[pos->x][pos->y] = ' ';
		pos->is_storage = 1;
	}
	return (map);
}

char **check_else_right(char **map, player_t *pos)
{
	if (map[pos->x][pos->y + 1] == 'X') {
		if (map[pos->x][pos->y + 2] == 'X' ||
		    map[pos->x][pos->y + 2] == '#')
			return (map);
		else if (map[pos->x][pos->y + 1] == 'O') {

		} else {
			map = move_box_right(map, pos);
		}
	} else {
		map[pos->x][pos->y + 1] = 'P';
		map[pos->x][pos->y] = ' ';
		pos->is_storage = 1;
	}
	return (map);
}

char **check_else_up(char **map, player_t *pos)
{
	if (map[pos->x - 1][pos->y] == 'X') {
		if (map[pos->x - 2][pos->y] == 'X' ||
		    map[pos->x - 2][pos->y] == '#')
			return (map);
		else if (map[pos->x - 1][pos->y] == 'O') {

		} else {
			map = move_box_up(map, pos);
		}
	} else {
		map[pos->x - 1][pos->y] = 'P';
		map[pos->x][pos->y] = ' ';
		pos->is_storage = 1;
	}
	return (map);
}

char **check_else_down(char **map, player_t *pos)
{
	if (map[pos->x + 1][pos->y] == 'X') {
		if (map[pos->x + 2][pos->y] == 'X' ||
		    map[pos->x + 2][pos->y] == '#')
			return (map);
		else if (map[pos->x + 1][pos->y] == 'O') {

		} else {
			map = move_box_down(map, pos);
		}
	} else {
		map[pos->x + 1][pos->y] = 'P';
		map[pos->x][pos->y] = ' ';
		pos->is_storage = 1;
	}
	return (map);
}
