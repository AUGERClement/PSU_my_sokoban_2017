/*
** EPITECH PROJECT, 2017
** my_popup.c
** File description:
** popup_to_enlarge_window
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"
#include "sokoban.h"

int need_enlarge(char **map)
{
	int i = 0;
	int j = 0;

	while (map[i] != NULL) {
		j = my_strlen(map[i]);
		if (j > COLS) {
			print_popup();
			return (1);
		}
		i++;
	}
	if (i > LINES) {
		print_popup();
		return (1);
	}
	return (0);
}

void print_popup(void)
{
	char str[] = "Please try with a greater window";
	int i = my_strlen(str);

	move(LINES / 2, (COLS - i) / 2);
	printw("%s", str);
}
