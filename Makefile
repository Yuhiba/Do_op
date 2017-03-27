NAME		= do_op

SRC			= src/main.c \
			src/do_op.c

INCLUDE		= include/

LIBDIR		= lib/

LIBSRC 		= lib/src/my_getnbr.c \
			lib/src/my_putstr.c \
			lib/src/my_putchar.c \
			lib/src/my_put_nbr.c

OBJ			= $(SRC:.c=.o)

CC			= cc

RM			= rm -f

LDFLAGS		+= -L $(LIBDIR)
CFLAGS		+= -I $(INCLUDE) -Wextra -Wall -Werror
CFLAGS		+= -I lib/include

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBDIR) Makefile re
			$(CC) -o $@ $^ $(LIBSRC)

clean:
			$(RM) $(OBJ)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re