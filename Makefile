SRCDOS=		./source/

SRC=	$(SRCDOS)get_file.c		\
	$(SRCDOS)check_map.c		\
	$(SRCDOS)edit_box_pos.c		\
	$(SRCDOS)move_on_goal.c		\
	$(SRCDOS)can_move.c		\
	$(SRCDOS)game_end.c		\
	$(SRCDOS)is_over.c		\
	$(SRCDOS)check_boxes.c		\
	$(SRCDOS)move_void.c		\
	$(SRCDOS)move_box.c		\
	$(SRCDOS)move_on_storage.c	\
	$(SRCDOS)main.c			\
	$(SRCDOS)my_sokoban.c		\
	$(SRCDOS)line_manage.c		\
	$(SRCDOS)get_player_pos.c	\
	$(SRCDOS)get_boxes_pos.c	\
	$(SRCDOS)manage_key.c		\
	$(SRCDOS)popup.c

OBJ=	$(SRC:.c=.o)

CFLAGS=	-Wall -Wextra -W -Iinclude

LDFLAGS = -L./lib -lmy -lncurses

NAME= 	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ) libmy.a
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

libmy.a:
		cd lib; make;
tests_run:

clean:
	rm -f $(OBJ)
	cd lib; make clean

fclean:	clean
	rm -f $(NAME)
	cd lib; make fclean

re:	fclean all
