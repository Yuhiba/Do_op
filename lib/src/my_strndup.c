#include <stdlib.h>

int my_strlen(char *);
char *my_strncpy(char *, char *, int);

char *my_strndup(char *src, int nb)
{
	char *dest;
	int len;

	len = my_strlen(src);
	if (len >= nb)
	{
		if ((dest = malloc((nb + 1) * sizeof(*dest))))
		{
			my_strncpy(dest, src, nb);
			dest[nb] = '\0';
		}
	}
	else
		if ((dest = malloc((len + 1) * sizeof(*dest))))
			my_strncpy(dest, src, len);
	return dest;
}