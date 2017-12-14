/*
** EPITECH PROJECT, 2017
** manage_key.c
** File description:
** manage key event
*/

#include <ncurses.h>
#include "sokoban.h"

char **manage_key_up(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x - 1][pos->y] == '#') {
		return (map);
	} else if (map[pos->x - 1][pos->y] == ' ') {
		map = move_void_up(map, pos);
	} else {
		map = check_else_up(map, pos, boxes);
	}
	return (map);
}

char **manage_key_down(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x + 1][pos->y] == '#') {
		return (map);
	} else if (map[pos->x + 1][pos->y] == ' ') {
		map = move_void_down(map, pos);
	} else {
		map = check_else_down(map, pos, boxes);
	}
	return (map);
}

char **manage_key_right(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x][pos->y + 1] == '#') {
		return (map);
	} else if (map[pos->x][pos->y + 1] == ' ') {
		map = move_void_right(map, pos);
	} else {
		map = check_else_right(map, pos, boxes);
	}
	return (map);
}

char **manage_key_left(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x][pos->y - 1] == '#') {
		return (map);
	} else if (map[pos->x][pos->y - 1] == ' ') {
		map = move_void_left(map, pos);
	} else {
		map = check_else_left(map, pos, boxes);
	}
	return (map);
}
