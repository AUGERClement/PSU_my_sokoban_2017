/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** cpy n char in another str
*/

char	*my_strncpy (char *dest, char const *src, int n)
{
	int j = 0;

	for (; j != n ; j++) {
		dest[j] = src[j];
	}
	return (dest);
}
