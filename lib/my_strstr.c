int my_strlen(char *);
int my_strncmp(char *, char *, int);

char *my_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!my_strncmp(str + i, to_find, my_strlen(to_find)))
			return str + i;
		i += 1;
	}
	return 0;
}