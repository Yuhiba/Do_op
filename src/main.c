#include <stdio.h>

#include "my.h"
#include "do_op.h"

int main(int argc, char *argv[])
{
	int (*ptr_display)(char *, char *, char *);

	if (argc == 0)
		my_putstr("error!");
	ptr_display = display(argv[1], argv[2], argv[3]);
	(*ptr_display)(argv[1], argv[2], argv[3]);
	return 0;
}