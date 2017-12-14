/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** return the lenght of a string
*/

int	my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}
