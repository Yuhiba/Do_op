NAME		= do_op

SRC			= src/main.c \
			src/do_op.c

INCLDIR		= include \

LIBDIR		= lib

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