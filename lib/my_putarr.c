/*
** EPITECH PROJECT, 2017
** my_putarr.c
** File description:
** print a char **
*/

#include <stdlib.h>
#include <ncurses.h>
#include "my.h"

void my_putarr(char **arr)
{
	int i = 0;

	while (arr[i] != NULL) {
		my_putstr(arr[i]);
		my_putchar('\n');
		i++;
	}
}

void my_putarr_x_to_end(char **arr, int x)
{
	int i = x;

	while (arr[i] != NULL) {
		my_putstr(arr[i]);
		my_putchar('\n');
		i++;
	}
}

void my_putarr_ncurses(char **arr)
{
	int i = 0;

	while (arr[i] != NULL) {
		printw("%s", arr[i]);
		printw("%c", '\n');
		i++;
	}
}
