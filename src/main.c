#include <stdio.h>

#include "do_op.h"

int main(int argc, char *argv[])
{
	char *value1;
	char *signe;
	char *value2;

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
	//int (*)(char *, char *, char *);
	return 0;
}