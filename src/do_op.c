#include <stdio.h>
#include <stdlib.h>

#include "do_op.h"
#include "my.h"

int my_getnbr(char *);
int my_putstr(char *);

int arithmetic(char *value1, char *signe, char *value2)
{
	int result;
	int i;

	result = 0;
	i = 0;
	if (signe[i] == '+')
	{
		result = my_getnbr(value1) + my_getnbr(value2);
		return result;
	}
	else if (signe[i] == '-')
	{
		result = my_getnbr(value1) - my_getnbr(value2);
		return result;
	}
	else if (signe[i] == '/')
	{
		if (my_getnbr(value2) == 0)
		{
			printf("Stop : Divistion by Zéro\n");
			return 0;
		}
		result = my_getnbr(value1) / my_getnbr(value2);
		return result;
	}
	else if (signe[i] == '%')
	{
		if (my_getnbr(value2) == 0)
		{
			printf("stop : modulo by Zéro!\n");
			return 0;
		}
		result = my_getnbr(value1) % my_getnbr(value2);
		return result;
	}
	else 
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
	return result;
}

int arithmetic_sou(char *value1, char *signe, char *value2)
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
	return result;
}

int arithmetic_div(char *value1, char *signe, char *value2)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (signe[i] == '/' && signe[i] != '\0')
	{
		if (my_getnbr(value2) == '0')
		{
			printf("Stop : Division by Zéro!");
			return 0;
		}
		result = my_getnbr(value1) / my_getnbr(value2);
		i += 1;
	}
	return result;
}

int arithmetic_modu(char *value1, char *signe, char *value2)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (signe[i] == '%' && signe[i] != '\0')
	{
		if (value2[i] == '0')
		{
			printf("Stop : modulo by Zéro!");
			return 0;
		}
		result = my_getnbr(value1) % my_getnbr(value2);
		i += 1;
	}
	return result;
}