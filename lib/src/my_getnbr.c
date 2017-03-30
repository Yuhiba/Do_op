int my_putchar(char);

int my_getnbr(char *str)
{
	int nb;
	int i;
	int negative_input;

	negative_input = 0;
	nb = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative_input = 1;
		else
			negative_input = 0;		
		i += 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		{
			nb = 10 * nb + (str[i] - '0');
			i += 1;
		} 
	if (negative_input)
		nb = -nb;
	return nb;
}