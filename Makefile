NAME		= do_op

SRC			= src/main.c \
			src/do_op.c

INCLDIR		= include/my.h \
			include/do_op.h

LIBDIR		= lib/

OBJ			= $(SRC:.c=.o)

CC			= cc

RM			= rm -f

LDFLAGS		+= -L $(LIBDIR)
CFLAGS		+= -I $(INCLDIR)
CFLAGS		+= -Wextra -Wall -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
			$(RM) $(OBJ)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re