/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** 
*/

#include "my.h"

int	my_putstr(char const *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++ )
	{
		my_putchar (str[a]);
	}
	return (0);
}
