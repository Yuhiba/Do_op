#include <stdio.h>
#include <stdlib.h>

#include "do_op.h"
#include "my.h"

int (*display(char *value1, char *signe, char *value2))(char *, char *, char *)
{
	if (signe[0] == '+')
		return &arithmetic_add;
	else if (signe[0] == '-')
		return &arithmetic_sous;
	else if (signe[0] == '/')
		return &arithmetic_div;
	else
		return &arithmetic_modulo;
	return 0;
}

int arithmetic_add(char *value1, char *signe, char *value2)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (signe[i] == '+' && signe[i] != '\0')
	{
		result = my_getnbr(value1) + my_getnbr(value2);
		i += 1;
	}
	return my_put_nbr(result);
}

int arithmetic_sous(char *value1, char *signe, char *value2)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (signe[i] == '-' && signe[i] != '\0')
	{
		result = my_getnbr(value1) - my_getnbr(value2);
		i += 1;
	}
	return my_put_nbr(result);
}

int arithmetic_div(char *value1, char *signe, char *value2)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (signe[i] == '/' && signe[i] != '\0')
	{
		if (value2[i] == '0')
			return my_putstr("Stop : Division by Zéro!");
		result = my_getnbr(value1) / my_getnbr(value2);
		i += 1;
	}
	return my_put_nbr(result);
}

int arithmetic_modulo(char *value1, char *signe, char *value2)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (signe[i] == '%' && signe[i] != '\0')
	{
		if (value2[i] == '0')
			return my_putstr("Stop : modulo by Zéro!");
		result = my_getnbr(value1) % my_getnbr(value2);
		i += 1;
	}
	return my_put_nbr(result);
}