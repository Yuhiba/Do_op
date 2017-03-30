int my_is_prime(int nb)
{
	int i;
	int res;

	i = 2;
	res = 0;
	while (nb >= i)
	{
		nb = nb / i;
		res = nb % i;
		i += 1;
		if (res > 0)
			return 1;
	}
	return 0;
}
