/*
** EPITECH PROJECT, 2017
** sokoban.h
** File description:
** header for sokoban
*/

struct player_pos {
	int x;
	int y;
	int is_storage;
};

typedef struct player_pos player_t;

void sokoban(char *filepath);
int get_size(char *filepath);
char *bufferize_file(char *filepath);
char *bufferize(char *filepath, int i);
char **convert_arr(char *buff);
int number_of_lines(char *str);
int my_lenline(char *str);
char **get_param(int key, char **map, char *filepath, player_t *pos);
int need_enlarge(char **map);
void my_putarr_ncurses(char **arr);
void print_popup(void);
void check_map(char *str);
int check_case_p(char delta, int player);
int check_case_x(char delta, int boxes);
int check_case_o(char delta, int storages);
int check_char(char *str);
void free_map(char **map);
void reset(char *filepath);
player_t *init_screen_n_player(char **map);
int get_player_x(char **map);
int get_player_y(char *line);
char **manage_key_up(char **map, player_t *pos);
char **manage_key_down(char **map, player_t *pos);
char **manage_key_right(char **map, player_t *pos);
char **manage_key_left(char **map, player_t *pos);
char **move_void_right(char **map, player_t *pos);
char **move_void_left(char **map, player_t *pos);
char **move_void_up(char **map, player_t *pos);
char **move_void_down(char **map, player_t *pos);
char **check_else_right(char **map, player_t *pos);
char **check_else_left(char **map, player_t *pos);
char **check_else_up(char **map, player_t *pos);
char **check_else_down(char **map, player_t *pos);
char **move_box_left(char **map, player_t *pos);
char **move_box_right(char **map, player_t *pos);
char **move_box_up(char **map, player_t *pos);
char **move_box_down(char **map, player_t *pos);
