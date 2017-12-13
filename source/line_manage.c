/*
** EPITECH PROJECT, 2017
** line_manage.c
** File description:
** for lines functions
*/

#include <stdlib.h>

int number_of_lines(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j] != '\0') {
		if (str[j] == '\n')
			i++;
		j++;
	}
	return (i);
}

int my_lenline(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != '\n') {
		i++;
	}
	return (i);
}
