/*
** EPITECH PROJECT, 2017
** move_on_goal.c
** File description:
** if player want to move a box on goal
*/

#include "sokoban.h"

char **box_on_goal_left(char **map, player_t *pos, box_t **boxes)
{
	box_t *tempo;

	tempo = edit_box_left(map, pos, boxes);
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x][pos->y - 1] = 'P';
	map[pos->x][pos->y - 2] = 'X';
	pos->is_storage	= tempo->is_storage;
	tempo->is_storage = 1;
	pos->y--;
	return (map);
}

char **box_on_goal_right(char **map, player_t *pos, box_t **boxes)
{
	box_t *tempo;

	tempo = edit_box_right(map, pos, boxes);
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x][pos->y + 1] = 'P';
	map[pos->x][pos->y + 2] = 'X';
	pos->is_storage = tempo->is_storage;
	tempo->is_storage = 1;
	pos->y++;
	return (map);
}

char **box_on_goal_up(char **map, player_t *pos, box_t **boxes)
{
	box_t *tempo;

	tempo = edit_box_up(map, pos, boxes);
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x - 1][pos->y] = 'P';
	map[pos->x - 2][pos->y] = 'X';
	pos->is_storage = tempo->is_storage;
	tempo->is_storage = 1;
	pos->x--;
	return (map);
}

char **box_on_goal_down(char **map, player_t *pos, box_t **boxes)
{
	box_t *tempo;

	tempo = edit_box_down(map, pos, boxes);
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x + 1][pos->y] = 'P';
	map[pos->x + 2][pos->y] = 'X';
	pos->is_storage = tempo->is_storage;
	tempo->is_storage = 1;
	pos->x++;
	return (map);
}
