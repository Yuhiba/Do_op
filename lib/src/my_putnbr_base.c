#include <unistd.h>

int my_putchar(char );
int my_strlen(char *);

int my_putnbr_base_rec(int nbr, char *base, size_t base_len)
{
	int res;

	res = nbr / base_len;
	if (res)
		my_putnbr_base_rec(res, base, base_len);
	 my_putchar(*(base + nbr % base_len));
	 return 0;
}

int my_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		my_putchar('-');
		nbr = -nbr;
	}
	my_putnbr_base_rec(nbr, base, my_strlen(base));
	return nbr;
}
