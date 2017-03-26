NAME		= do_op

SRC			= src/main.c \
			src/do_op.c

INCLUDE		= include/

LIBDIR		= lib/

OBJ			= $(SRC:.c=.o)

CC			= cc

RM			= rm -f

LDFLAGS		+= -L $(LIBDIR)
CFLAGS		+= -I $(INCLDIR) -Wextra -Wall -Werror
CFLAGS		+= -I lib/include/

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $@ $^

clean:
			$(RM) $(OBJ)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re