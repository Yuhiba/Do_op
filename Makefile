NAME        = do_op

SRC         = src/main.c \
            src/do_op.c

INCLUDE	    = include/

LIBDIR      = lib/

OBJ         = $(SRC:.c=.o)

CC          = cc

RM          = rm -f

LDFLAGS	    += -L $(LIBDIR)
CFLAGS      += -I $(INCLUDE) -Wextra -Wall
CFLAGS      += -I lib/include

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBDIR)
			$(CC) -o $@ $^  -L $(LIBDIR) -lmy

clean:
			make -C $(LIBDIR) clean
			$(RM) $(OBJ)

fclean: 	clean
			make -C $(LIBDIR) fclean
			$(RM) $(NAME)

re:			fclean all
			make -C $(LIBDIR) re

.PHONY:	    all clean fclean re
