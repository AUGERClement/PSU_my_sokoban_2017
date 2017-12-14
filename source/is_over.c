/*
** EPITECH PROJECT, 2017
** is_over.c
** File description:
** check if game is clear
*/

#include <stdlib.h>
#include "sokoban.h"

void can_continue(char **map, box_t **boxes, player_t *pos)
{
	is_clear(map, boxes, pos);
	is_over(map, boxes, pos);
	return;
}

void is_clear(char **map, box_t **boxes, player_t *pos)
{
	int i = 0;

	while (boxes[i] != NULL) {
		if (boxes[i]->is_storage != 1) {
			return;
		}
		i++;
	}
	free_soko(map, boxes, pos);
	exit (0);
}

void is_over(char **map, box_t **boxes, player_t *pos)
{
	int i = 0;
	int j = 0;

	while (boxes[i] != NULL) {
		if (boxes[i]->can_move == 1) {
			j++;
		}
		i++;
	}
	if (j == 0) {
		free_soko(map, boxes, pos);
		exit (1);
	}
	return;
}
