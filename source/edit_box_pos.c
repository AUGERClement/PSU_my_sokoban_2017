/*
** EPITECH PROJECT, 2017
** find_box_moving.c
** File description:
** find the box to move
*/

#include <stdlib.h>
#include "sokoban.h"

box_t *edit_box_down(char **map, player_t *pos, box_t **boxes)
{
	int i = 0;
	int move = 0;

	while (boxes[i]->x != pos->x + 1 ||
	       boxes[i]->y != pos->y) {
		i++;
	}
	if (boxes[i]->x == pos->x + 1 &&
	    boxes[i]->y == pos->y) {
		boxes[i]->x++;
		move = can_move(map, boxes[i]->x, boxes[i]->y);
		boxes[i]->can_move = move;
		pos->is_storage = boxes[i]->is_storage;
	}
	return (boxes[i]);
}

box_t *edit_box_up(char **map, player_t *pos, box_t **boxes)
{
        int i = 0;
        int move = 0;

        while (boxes[i]->x != pos->x - 1 ||
	       boxes[i]->y != pos->y) {
		i++;
	}
	if (boxes[i]->x == pos->x - 1 &&
	    boxes[i]->y == pos->y) {
		boxes[i]->x--;
		move = can_move(map, boxes[i]->x, boxes[i]->y);
		boxes[i]->can_move = move;
		pos->is_storage = boxes[i]->is_storage;
	}
	return (boxes[i]);
}


box_t *edit_box_right(char **map, player_t *pos, box_t **boxes)
{
        int i = 0;
        int move = 0;

        while (boxes[i]->x != pos->x ||
	       boxes[i]->y != pos->y + 1) {
		i++;
	}
	if (boxes[i]->x == pos->x &&
	    boxes[i]->y == pos->y + 1) {
		boxes[i]->y++;
		move = can_move(map, boxes[i]->x, boxes[i]->y);
		boxes[i]->can_move = move;
		pos->is_storage = boxes[i]->is_storage;
		}
	return (boxes[i]);
}


box_t *edit_box_left(char **map, player_t *pos, box_t **boxes)
{
	int i = 0;
	int move = 0;

	while (boxes[i]->x != pos->x ||
	       boxes[i]->y != pos->y - 1) {
			i++;
        }
	if (boxes[i]->x == pos->x &&
	    boxes[i]->y == pos->y - 1) {
		boxes[i]->y--;
		move = can_move(map, boxes[i]->x, boxes[i]->y);
		boxes[i]->can_move = move;
		pos->is_storage = boxes[i]->is_storage;
	}
        return (boxes[i]);
}
