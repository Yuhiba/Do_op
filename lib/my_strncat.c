int my_strlen(char *);

char *my_strncat(char *dest, char *src, int nb)
{
	int dest_len;
	int i;

	dest_len = my_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i += 1;
	}
	dest[dest_len + i] = '\0';
	return dest;
}