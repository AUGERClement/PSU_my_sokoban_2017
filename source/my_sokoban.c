/*
** EPITECH PROJECT, 2017
** sokoban.c
** File description:
** display file then activate game mode
*/

#include <stdlib.h>
#include <ncurses.h>
#include "sokoban.h"
#include "my.h"

void sokoban(char *filepath)
{
	char *map;

	map = bufferize_file(filepath);
	initscr();
	printw("%s", map);
	refresh();
	getch();
	endwin();
}
