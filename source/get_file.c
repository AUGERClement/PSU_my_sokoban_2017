/*
** EPITECH PROJECT, 2017
** get_file.c
** File description:
** print file content
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "sokoban.h"

int get_size(char *filepath)
{
	struct stat s;

	stat(filepath, &s);
	return (s.st_size);
}

char *bufferize_file(char *filepath)
{
	int i = 0;
	char *str;

	i = get_size(filepath);
	str = bufferize(filepath, i);
	return (str);
}

char *bufferize(char const *filepath, int i)
{
	char *buffer = malloc(sizeof(char) * i) + 1;
	int fd = open(filepath, O_RDONLY);
	int returned = 0;

	if (fd == -1)
		exit (84);
	returned = read(fd, buffer, i);
	if (returned == -1)
		exit (84);
	close(fd);
	return (buffer);
}