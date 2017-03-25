int my_putchar(char);

int my_put_nbr_rec_po(int nb)
{
    	if (nb >= 10) 
        my_put_nbr_rec_po(nb / 10);
    return my_putchar(48 + nb % 10);
}

int my_put_nbr_rec_neg(int nb)
{
	if (nb <= -10)
		my_put_nbr_rec_neg(nb /10);
	return my_putchar(48 - nb % 10);
}

int my_put_nbr(int nb)
{
	if (nb < 0)
	{
		my_putchar('-');
		my_put_nbr_rec_neg(nb);
	}
	if (nb >= 0)
		my_put_nbr_rec_po(nb);
	return 0;
}
