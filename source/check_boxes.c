/*
** EPITECH PROJECT, 2017
** check_boxes.c
** File description:
** if player want to move a box
*/

#include "sokoban.h"

char **check_else_left(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x][pos->y - 1] == 'X') {
		if (map[pos->x][pos->y - 2] == 'X' ||
		    map[pos->x][pos->y - 2] == '#') {
			return (map);
		} else if (map[pos->x][pos->y - 2] == 'O') {
			map = box_on_goal_left(map, pos, boxes);
		} else {
			map = move_box_left(map, pos, boxes);
		}
	} else {
		map = on_storage_left(map, pos);
	}
	return (map);
}

char **check_else_right(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x][pos->y + 1] == 'X') {
		if (map[pos->x][pos->y + 2] == 'X' ||
		    map[pos->x][pos->y + 2] == '#') {
			return (map);
		} else if (map[pos->x][pos->y + 2] == 'O') {
			map = box_on_goal_right(map, pos, boxes);
		} else {
			map = move_box_right(map, pos, boxes);
		}
	} else {
		map = on_storage_right(map, pos);
	}
	return (map);
}

char **check_else_up(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x - 1][pos->y] == 'X') {
		if (map[pos->x - 2][pos->y] == 'X' ||
		    map[pos->x - 2][pos->y] == '#') {
			return (map);
		} else if (map[pos->x - 2][pos->y] == 'O') {
			map = box_on_goal_up(map, pos, boxes);
		} else {
			map = move_box_up(map, pos, boxes);
		}
	} else {
		map = on_storage_up(map, pos);
	}
	return (map);
}

char **check_else_down(char **map, player_t *pos, box_t **boxes)
{
	if (map[pos->x + 1][pos->y] == 'X') {
		if (map[pos->x + 2][pos->y] == 'X' ||
		    map[pos->x + 2][pos->y] == '#') {
			return (map);
		} else if (map[pos->x + 2][pos->y] == 'O') {
			map = box_on_goal_down(map, pos, boxes);
		} else {
			map = move_box_down(map, pos, boxes);
		}
	} else {
		map = on_storage_down(map, pos);
	}
	return (map);
}
