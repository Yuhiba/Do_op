int my_swap(int *, int *);

void my_sort_int_tab(int *tab, int size) 
{
	int i;

	i = 0;
	if (size > 1)
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				my_swap(tab + i, tab + i + 1);
				i = -1;
			}
			i += 1;
		}
}