NAME		= do_op

SRC		= src/main.c \
		src/do_op.c

<<<<<<< HEAD
INCLDIR		= include/my.h \
			include/do_op.h
=======
INCLDIR		= include/my.h 
>>>>>>> 03f75ff999c616ea85abc187e2c2452191a9c2f9

LIBDIR		= lib/my_getnbr.c \
			lib/my_is_prime.c \
			lib/my_isneg.c \
			lib/my_power_rec.c \
			lib/my_put_nbr.c \
			lib/my_putchar.c \
			lib/my_putnbr_base.c \
			lib/my_putstr.c \
			lib/my_revstr.c \
			lib/my_show_wordtab.c \
			lib/my_showmem.c \
			lib/my_showstr.c \
			lib/my_sort_int_tab.c \
			lib/my_square_root.c \
			lib/my_str_isalpha.c \
			lib/my_str_islower.c \
			lib/my_str_isnum.c \
			lib/my_str_isprintable.c \
			lib/my_str_isupper.c \
			lib/my_str_to_wordtab.c \
			lib/my_strcapitalize.c \
			lib/my_strcat.c \
			lib/my_strcmp.c \
			lib/my_strcpy.c \
			lib/my_strdup.c \
			lib/my_strlen.c \
			lib/my_strlowcase.c \
			lib/my_strncat.c \
			lib/my_strncmp.c \
			lib/my_strncpy.c \
			lib/my_strndup.c \
			lib/my_strstr.c \
			lib/my_strupcase.c \
			lib/my_swap.c

OBJ		= $(SRC:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS		+= -I $(INCLDIR) -L. $(LIBDIR)
CFLAGS		+= -Wextra -Wall -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
<<<<<<< HEAD
			$(CC) -o $@ $^
			ar rc $@ $<
			ranlib $@
=======
		$(CC) -o $@ $^
>>>>>>> 03f75ff999c616ea85abc187e2c2452191a9c2f9

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
