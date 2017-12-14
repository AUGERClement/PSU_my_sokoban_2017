/*
** EPITECH PROJECT, 2017
** get_boxes_pos.c
** File description:
** get pos of all boxes
*/

#include <stdlib.h>
#include "sokoban.h"

box_t **init_boxes(char **map, int number_of_boxes)
{
	int x = 0;
	int y = 0;
	int i = 0;
	box_t **boxes = malloc(sizeof(box_t *) * (number_of_boxes + 1));

	while (map[x] != NULL) {
		while (map[x][y] != '\0') {
			if (map[x][y] == 'X') {
				boxes[i] = set_in_struct(map, x, y);
				i++;
			}
			y++;
		}
		x++;
		y = 0;
	}
	boxes[i] = NULL;
	return (boxes);
}

box_t *set_in_struct(char **map, int x, int y)
{
	box_t *box = malloc(sizeof(box_t));

	box->x = x;
	box->y = y;
	box->is_storage = 0;
	box->can_move = can_move(map, x, y);
	return (box);
}
