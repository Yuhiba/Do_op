char *my_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{	
		if ((str[i] == ' ' || str[i] == '+' || str[i] == '-')
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i += 1;	
	}
	return str;
}