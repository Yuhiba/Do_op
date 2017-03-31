NAME        = do_op

SRC	        = src/main.c \
	        src/do_op.c

INCLUDE	    = include/

LIBDIR      = lib/

OBJ         = $(SRC:.c=.o)

CC          = cc

RM          = rm -f

LDFLAGS	    += -L $(LIBDIR)
CFLAGS      += -I $(INCLUDE) -Wextra -Wall -Werror
CFLAGS      += -I lib/include

all:        $(NAME)

$(NAME):    $(OBJ)
			make -C $(LIBDIR) clean fclean re
			$(CC) -o $@ $^  -L $(LIBDIR) -lmy

clean:
			$(RM) $(OBJ)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re