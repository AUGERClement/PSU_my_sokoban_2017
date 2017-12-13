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

char *bufferize(char *filepath, int i)
{
	char *buffer = malloc(sizeof(char) * (i + 1));
	int fd = open(filepath, O_RDONLY);
	int returned = 0;

	if (fd == -1)
		exit (84);
	returned = read(fd, buffer, i);
	buffer[i] = '\0';
	if (returned == -1)
		exit (84);
	close(fd);
	return (buffer);
}

char **convert_arr(char *buff)
{
	int i = 0;
	int j = 0;
	int k = number_of_lines(buff);
	int cursor = 0;
	char **map = malloc(sizeof(char *) * (k + 1));

	while (i < k) {
		j = my_lenline(buff + cursor);
		map[i] = malloc(sizeof(char) * j + 1);
		map[i] = my_strncpy(map[i], buff + cursor, j);
		map[i][j] = '\0';
		cursor = cursor + j + 1;
		i++;
	}
	map[i] = NULL;
	return (map);
}
