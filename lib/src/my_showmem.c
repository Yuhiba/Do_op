#include <unistd.h>

int my_putnbr_base(int, char *);
int my_putchar(char);
int my_putstr(char *);

void print_adress_ligne(int i)
{
	if (i < 0x10)
		my_putstr("0000000");
	else if (i < 0x100)
		my_putstr("000000");
	else if (i < 0x1000)
		my_putstr("00000");
	else if (i < 0x10000)
		my_putstr("0000");
	else if (i < 0x100000)
		my_putstr("000");
	else if (i < 0x1000000)
		my_putstr("00");
	else if (i < 0x10000000)
		my_putstr("0");
	my_putnbr_base(i, "0123456789abcdef");
	my_putstr(":");
}

void print_str_hexa(char *str, int size)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i % 2 == 0)
			my_putchar(' ');
		if (i < size)
		{
			if (str[i] < 0x10)
				my_putchar('0');
			my_putnbr_base(str[i], "0123456789abcdef");
		}
		else
			my_putstr("  ");
		i += 1;
	}
}

void print_str(char *str, int size)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			if (str[i] < ' ')
				my_putchar('.');
			else
				my_putchar(str[i]);
		}
		i += 1;
	}
}

int my_showmem(char *str, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		print_adress_ligne(i);
		print_str_hexa(str + i, size - i);
		my_putchar(' ');
		print_str(str + i, size - i);
		my_putchar('\n');
		i += 16;
	}
	return 0;
}