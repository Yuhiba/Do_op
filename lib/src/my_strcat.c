int my_strlen(char *);

char *my_strcat(char *dest, char *src)
{
	int i;
	int dest_len;

	i = 0;
	dest_len = my_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i += 1;
	}
	dest[dest_len + i] = '\0';
	return dest;
}