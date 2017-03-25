NAME		= do_op

SRC			= main.c \
			do_op.c

INCLDIR		= ../include \
			do_op.h

LIBDIR		= ../lib/libmy.a

OBJ			= $(SRC:.c=.o)

CC			= gcc

RM			= rm -f

CFLAGS		+= -I $(INCLDIR)
CFLAGS		+= -Wextra -Wall -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $@ $^

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re