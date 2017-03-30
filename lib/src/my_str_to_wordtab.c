#include <stdlib.h>

char *my_strndup(char *, int);
int my_strlen(char *);

int is_alphanumeric(char c)
{
	return (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9');
}

int word_len(char *str)
{
	int len;
	int i;
	
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
			len += 1;
		if (!is_alphanumeric(str[i])) 
			return len;
		i += 1;
	}
	return len;
}

int count_words(char *str)
{
	int i;
	int words;
	
	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]) && !is_alphanumeric(str[i + 1])) 
			words += 1;
		i += 1;
	}
	return words;
}

char *next_word(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return NULL;
	while (str[i] && !is_alphanumeric(str[i]))
		i += 1;
	return str + i;
}

char **my_str_to_wordtab(char *str)
{
	int i;
	char **tab;
	int words;
	size_t str_len;

	words = count_words(str);
	if ((tab = malloc((words + 1) * sizeof(*tab))))
	{
		i = 0;
		while ((str = next_word(str)))
		{
			str_len = word_len(str);
			tab[i] = my_strndup(str, str_len);
			str += str_len;
			i += 1;
		}
	 	tab[i] = NULL;
	}
	return tab;
}