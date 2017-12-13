/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
** try to find a string in another
*/

#include <stdlib.h>

char *my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (str[i] != to_find[j]) {
		i++;
	}
	k = i;
	if (str[k] == to_find[j]) {
		while (str[k] == to_find[j] && str[k] != '\0'
		       && to_find[j] != '\0') {
			k++;
			j++;
		}
		if (to_find[j] == '\0') {
			return (&str[i]);
		}
	}
	return (NULL);
}

int is_char_in_str(char delta, char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == delta)
			return (1);
		i++;
	}
	return (0);
}
