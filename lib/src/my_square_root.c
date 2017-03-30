int my_power_rec(int, int);

int my_square_root(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		nb = 0;
	while (i < nb)
	{
		if (my_power_rec(i, 2) == nb) 
			return i;
		i += 1;
	}
	return nb;
}