#include <stdio.h>

#include "my.h"
#include "do_op.h"

int main(int argc, char *argv[])
{
	char *value1;
	char *signe;
	char *value2;
	int i;

	i = 0;
	value1 = NULL;
	signe = NULL;
	value2 = NULL;

	if (argc == 3)
	{
		value1 = argv[1];
		signe = argv[2];
		value2 = argv[3];
	}
	arithmetic(value1, signe, value2);
	printf("%d\n", arithmetic(value1, signe, value2));
	return 0;
}