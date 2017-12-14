/*
** EPITECH PROJECT, 2017
** game_end.c
** File description:
** if game end, free all
*/

#include <stdlib.h>
#include <ncurses.h>
#include "sokoban.h"

void free_soko(char **map, box_t **boxes, player_t *pos)
{
	free_map(map);
	free_boxes(boxes);
	free(pos);
	clear();
	endwin();
}

void free_map(char **map)
{
	int i = 0;

	while (map[i] != NULL) {
                free(map[i]);
                i++;
        }
	return;
}

void free_boxes(box_t **boxes)
{
	int i = 0;

	while (boxes[i] != NULL) {
		free(boxes[i]);
		i++;
	}
	return;
}
