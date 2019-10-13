#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all received arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0, upon succes
 */

int main(int argc, char **argv)
{

	int ind;

	if (argc > 0)
	{
		for (ind = 0; ind < argc; ind++)
		{
			printf("%s\n", argv[ind]);
		}
	}

	return (0);
}
