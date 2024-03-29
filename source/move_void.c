/*
** EPITECH PROJECT, 2017
** move_void.c
** File description:
** free movement for player
*/

#include "sokoban.h"

char **move_void_up(char **map, player_t *pos)
{
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x - 1][pos->y] = 'P';
	pos->x--;
	pos->is_storage = 0;
	return (map);
}

char **move_void_down(char **map, player_t *pos)
{
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x + 1][pos->y] = 'P';
	pos->x++;
	pos->is_storage = 0;
	return (map);
}

char **move_void_left(char **map, player_t *pos)
{
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x][pos->y - 1] = 'P';
	pos->y--;
	pos->is_storage = 0;
	return (map);
}

char **move_void_right(char **map, player_t *pos)
{
	map[pos->x][pos->y] = pos->is_storage ? 'O' : ' ';
	map[pos->x][pos->y + 1] = 'P';
	pos->y++;
	pos->is_storage = 0;
	return (map);
}
