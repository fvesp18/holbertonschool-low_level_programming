#include <stdlib.h>
#include <stdio.h>

/**
 * main - multplies arguments in command line
 * @argc: multiplier counter
 * @argv: multiplier vector
 * @prod: product
 * Return: 0, upon success
 */

int main(int argc, char **argv)
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}

	if (argc == 1)
		printf("Error\n");

       	return (0);

}
