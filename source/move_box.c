/*
** EPITECH PROJECT, 2017
** move_box.c
** File description:
** move a free box
*/

#include "sokoban.h"

char **move_box_down(char **map, player_t *pos)
{
	map[pos->x][pos->y] = ' ';
	map[pos->x + 1][pos->y] = 'P';
	map[pos->x + 2][pos->y] = 'X';
	return (map);
}

char **move_box_up(char **map, player_t *pos)
{
	map[pos->x][pos->y] = ' ';
	map[pos->x - 1][pos->y] = 'P';
	map[pos->x - 2][pos->y] = 'X';
	return (map);
}

char **move_box_right(char **map, player_t *pos)
{
	map[pos->x][pos->y] = ' ';
	map[pos->x][pos->y + 1] = 'P';
	map[pos->x][pos->y + 2] = 'X';
	return (map);
}

char **move_box_left(char **map, player_t *pos)
{
	map[pos->x][pos->y] = ' ';
	map[pos->x][pos->y - 1] = 'P';
	map[pos->x][pos->y - 2] = 'X';
	return (map);
}