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

	if (argc != 4)
	{
		printf ("Error\n");
		exit (98)
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf ("Error\n");
		exit (99);
	}
	if (atoi(argv[3] == 0) && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit (100);
	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
