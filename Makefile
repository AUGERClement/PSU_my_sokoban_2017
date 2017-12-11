SRCDOS=		./source/

SRC=	$(SRCDOS)get_file.c	\
	$(SRCDOS)main.c		\
	$(SRCDOS)my_sokoban.c

OBJ=	$(SRC:.c=.o)

CFLAGS=	-Wall -Wextra -W -Iinclude

LDFLAGS = -L./lib -lmy -lncurses

NAME= 	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ) libmy.a
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

libmy.a:
		cd lib; make;
clean:
	rm -f $(OBJ)
	cd lib; make clean

fclean:	clean
	rm -f $(NAME)
	cd lib; make fclean

re:	fclean all
