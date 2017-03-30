int my_strlen(char *str);

char *my_revstr(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = my_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i += 1;
		j -= 1;
	}
	return str;
}