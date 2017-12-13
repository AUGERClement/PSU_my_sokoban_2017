/*
** EPITECH PROJECT, 2017
** check_map.c
** File description:
** check if buffer has a valid map
*/

#include "sokoban.h"
#include "my.h"

void check_map(char *str)
{
	int i = 0;
	int valid = 0;
	int player = 0;
	int boxes = 0;
	int storages = 0;

	while (str[i] != '\0') {
		player = check_case_p(str[i], player);
		boxes = check_case_x(str[i], boxes);
		storages = check_case_o(str[i], storages);
		i++;
	}
	valid = check_char(str);
	if (player != 1 || boxes != storages || valid)
		exit(84);
}

int check_case_p(char delta, int player)
{
	if (delta == 'P') {
		player++;
	}
	return (player);
}

int check_case_x(char delta, int boxes)
{
	if (delta == 'X') {
		boxes++;
	}
	return (boxes);
}

int check_case_o(char delta, int storages)
{
	if (delta == 'O') {
		storages++;
	}
	return (storages);
}

int check_char(char *str)
{
	int i = 0;
	int j = 0;
	char valid_char[] = "# PXO\n";

	while (str[i] != '\0') {
		j = is_char_in_str(str[i], valid_char);
		if (j == 0)
			return (1);
		i++;
	}
	return (0);
}
