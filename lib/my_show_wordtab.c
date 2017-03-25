int my_putstr(char*);

int my_show_wordtab(char **tab)
{
	while (*tab)
	{
		my_putstr(*tab++);
		my_putstr("\n");
	}
	return 0;
}