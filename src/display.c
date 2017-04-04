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
	else if (signe[0] == '*')
		return &arithmetic_multi;
	else
		return &arithmetic_modulo;
	return 0;
}