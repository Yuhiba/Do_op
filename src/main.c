#include <stdio.h>

//#include "my.h"
#include "do_op.h"

int main(int argc, char *argv[])
{
	char *value1;
	char *signe;
	char *value2;
	int i;

	i = 0;
	if (argc = 3)
	{
		value1 = argv[1];
		signe = argv[2];
		value2 = argv[3];
	}
	arithmetic(value1, signe, value2);
	printf("%d\n", arithmetic(value1, signe, value2));

	//printf("test1 => (1+1) = %d\n" ,arithmetic("1", "+", "1"));
	//printf("test2 => (42freinds - ---20toto12) = %d\n", arithmetic("42freinds", "-", "---20toto12"));
	//printf("test3 => (1 p 1) = %d\n", arithmetic("1", "p", "1"));
	//printf("test4 => (1 +toto 1) = %d\n", arithmetic("1", "+toto", "1"));
	//printf("test5 => (1 + toto3) = %d\n", arithmetic("1", "+", "toto3"));
	//printf("test6 => (toto3 + 4) = %d\n", arithmetic("toto3", "+", "4"));
	//printf("test7 => (foo plus bar) = %d\n", arithmetic("foo", "plus", "bar"));
	//printf("test8 => (25 / 0) = %d\n", arithmetic("25", "/", "0"));
	//printf("test9 => (25 % 0) = %d\n", arithmetic("25", "%", "0"));
	//printf("test10 => (25 / 2) = %d\n", arithmetic("25", "/", "2"));
	//printf("test11 => (25 % 2) = %d\n", arithmetic("25", "%", "2"));

	return 0;
}