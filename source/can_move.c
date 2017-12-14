/*
** EPITECH PROJECT, 2017
** can_move.c
** File description:
** set if a box can move or not
*/

int can_move(char **map, int x, int y)
{
	if ((map[x + 1][y] == '#' && map[x][y - 1] == '#') ||
	    (map[x + 1][y] == '#' && map[x][y + 1] == '#') ||
	    (map[x - 1][y] == '#' && map[x][y - 1] == '#') ||
	    (map[x - 1][y] == '#' && map[x][y + 1] == '#')) {
		return (0);
	} else {
		return (1);
	}
}
