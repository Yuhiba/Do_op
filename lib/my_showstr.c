#include <unistd.h>

int my_putnbr_base(int, char *);
int my_putchar(char c);

void print_non_printable(char c)
{
	my_putchar('\\');
	if (c < 0x10)
		my_putchar('0');
	my_putnbr_base(c, "0123456789abcdef");
}

int my_showstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			my_putchar(str[i]);
		else
			print_non_printable(str[i]);
		i += 1;
	}
	return 0;
}