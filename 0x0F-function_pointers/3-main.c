#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument scope
 * @argv: types of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	
	if (argc != 4)
	{
		printf ("Error\n");
		printf ("ARGS");
		exit (98);
	}
	if (ptr == NULL)
	{
		printf ("Error\n");
		printf ("PTR");
		exit (99);
	}
	if ((num2 == 0) && ((*argv[2] == '/') || (*argv[2] == '%')))
	{
		printf("Error\n");
		printf ("MOD");
		exit (100);
	}

	printf("%d\n", ptr(num1, num2));
	return (0);
}
