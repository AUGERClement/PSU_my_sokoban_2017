/*
** EPITECH PROJECT, 2017
** move_on_storage.c
** File description:
** if player want to reach a storage
*/

#include "sokoban.h"

char **on_storage_left(char **map, player_t *pos)
{
	map[pos->x][pos->y - 1] = 'P';
	map[pos->x][pos->y] = ' ';
	pos->is_storage = 1;
	pos->y--;
	return (map);
}

char **on_storage_right(char **map, player_t *pos)
{
	map[pos->x][pos->y + 1] = 'P';
	map[pos->x][pos->y] = ' ';
	pos->is_storage = 1;
	pos->y++;
	return (map);
}

char **on_storage_up(char **map, player_t *pos)
{
	map[pos->x - 1][pos->y] = 'P';
	map[pos->x][pos->y] = ' ';
	pos->x--;
	pos->is_storage = 1;
	return (map);
}

char **on_storage_down(char **map, player_t *pos)
{
	map[pos->x + 1][pos->y] = 'P';
	map[pos->x][pos->y] = ' ';
	pos->x++;
	pos->is_storage = 1;
	return (map);
}
