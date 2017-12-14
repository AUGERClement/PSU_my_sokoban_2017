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

struct box_pos {
	int x;
	int y;
	int is_storage;
	int can_move;
};

typedef struct box_pos box_t;

void sokoban(char *filepath);
int get_size(char *filepath);
char *bufferize_file(char *filepath);
char *bufferize(char *filepath, int i);
char **convert_arr(char *buff);
int number_of_lines(char *str);
int my_lenline(char *str);
box_t **init_boxes(char **map, int number_of_boxes);
box_t *set_in_struct(char **map, int x, int y);
int can_move(char **map, int x, int y);
char **get_param(char **map, char *filepath, player_t *pos, box_t **boxes);
int need_enlarge(char **map);
void my_putarr_ncurses(char **arr);
void print_popup(void);
int check_map(char *str);
int check_case_p(char delta, int player);
int check_case_x(char delta, int boxes);
int check_case_o(char delta, int storages);
int check_char(char *str);
void free_map(char **map);
void reset(char *filepath);
player_t *init_screen_n_player(char **map);
int get_player_x(char **map);
int get_player_y(char *line);
char **manage_key_up(char **map, player_t *pos, box_t **boxes);
char **manage_key_down(char **map, player_t *pos, box_t **boxes);
char **manage_key_right(char **map, player_t *pos, box_t **boxes);
char **manage_key_left(char **map, player_t *pos, box_t **boxes);
char **move_void_right(char **map, player_t *pos);
char **move_void_left(char **map, player_t *pos);
char **move_void_up(char **map, player_t *pos);
char **move_void_down(char **map, player_t *pos);
char **check_else_right(char **map, player_t *pos, box_t **boxes);
char **check_else_left(char **map, player_t *pos, box_t **boxes);
char **check_else_up(char **map, player_t *pos, box_t **boxes);
char **check_else_down(char **map, player_t *pos, box_t **boxes);
char **move_box_left(char **map, player_t *pos, box_t **boxes);
char **move_box_right(char **map, player_t *pos, box_t **boxes);
char **move_box_up(char **map, player_t *pos, box_t **boxes);
char **move_box_down(char **map, player_t *pos, box_t **boxes);
char **on_storage_left(char **map, player_t *pos);
char **on_storage_right(char **map, player_t *pos);
char **on_storage_up(char **map, player_t *pos);
char **on_storage_down(char **map, player_t *pos);
box_t *edit_box_left(char **map, player_t *pos, box_t **boxes);
box_t *edit_box_right(char **map, player_t *pos, box_t **boxes);
box_t *edit_box_up(char **map, player_t *pos, box_t **boxes);
box_t *edit_box_down(char **map, player_t *pos, box_t **boxes);
char **box_on_goal_left(char **map, player_t *pos, box_t **boxes);
char **box_on_goal_right(char **map, player_t *pos, box_t **boxes);
char **box_on_goal_up(char **map, player_t *pos, box_t **boxes);
char **box_on_goal_down(char **map, player_t *pos, box_t **boxes);
void can_continue(char **map, box_t **boxes, player_t *pos);
void is_clear(char **map, box_t **boxes, player_t *pos);
void is_over(char **map, box_t **boxes, player_t *pos);
void free_soko(char **map, box_t **boxes, player_t *pos);
void free_map(char **map);
void free_boxes(box_t **boxes);
