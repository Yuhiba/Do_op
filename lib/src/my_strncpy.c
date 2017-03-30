char *my_strncpy(char *dest, char *src, int nc)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < nc)
	{
		dest[i] = src[i];
		i += 1;
	}
	while (i < nc)
	{
		dest[i] = '\0';
		i += 1;
	}
	return dest;
}