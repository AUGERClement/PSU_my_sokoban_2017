/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main for sokoban
*/

#include <stdlib.h>
#include "sokoban.h"
#include "my.h"

int main(int argc, char **argv)
{
	char *str;

	if (argc != 2) {
		my_putstr("Invalid number of argument.\nRetry with -h\n");
		exit (84);
	} else if (my_strcmp(argv[1], "-h") == 0) {
		str = bufferize_file("./source/help");
		my_putstr(str);
		exit (0);
	} else {
		sokoban(argv[1]);
	}
}
