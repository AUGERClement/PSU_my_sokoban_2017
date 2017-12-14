/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** cmp two string
*/

int my_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i]) {
		i++;
	}
	if (i != 0)
		i--;
	if (s1[i] != '\0' || s2[i] != '\0') {
		return (1);
	} else {
		return (0);
	}
}
