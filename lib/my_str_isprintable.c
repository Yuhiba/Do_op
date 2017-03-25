int my_str_isprintable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return 0;
		i += 1;
	}
	return 1;
}