SRC=		my_putchar.c 		\
		my_putstr.c	 	\
		my_strcmp.c

OBJ=		$(SRC:.c=.o)

NAME=		libmy.a

CFLAGS=		-I../include

all:		$(NAME)

$(NAME):		$(OBJ)
			ar rc libmy.a $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

auteur:		echo $(USER) > auteur
