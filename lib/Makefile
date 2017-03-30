NAME 		= libmy.a

SRC			= src/my_getnbr.c \
			src/my_is_prime.c \
			src/my_isneg.c \
			src/my_power_rec.c \
			src/my_put_nbr.c \
			src/my_putchar.c \
			src/my_putnbr_base.c \
			src/my_putstr.c \
			src/my_revstr.c \
			src/my_show_wordtab.c \
			src/my_showmem.c \
			src/my_showstr.c \
			src/my_sort_int_tab.c \
			src/my_square_root.c \
			src/my_str_isalpha.c \
			src/my_str_islower.c \
			src/my_str_isnum.c \
			src/my_str_isprintable.c \
			src/my_str_isupper.c \
			src/my_str_to_wordtab.c \
			src/my_strcapitalize.c \
			src/my_strcat.c \
			src/my_strcmp.c \
			src/my_strcpy.c \
			src/my_strdup.c \
			src/my_strlen.c \
			src/my_strlowcase.c \
			src/my_strncat.c \
			src/my_strncmp.c \
			src/my_strncpy.c \
			src/my_strndup.c \
			src/my_strstr.c \
			src/my_strupcase.c \
			src/my_swap.c

INCLDIR		= include/

OBJ			= $(SRC:.c=.o)

CC			= gcc

CFLAGS		+= -I $(INCLDIR) -Wextra -Wall -Werror
#CFLAGS		+= -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $@ $<
			ranlib $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean res