#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints name of file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0, upon success
 */

int main(int argc, char *argv[])
{
	(void) (argc);
	(void) (argv);

	printf("%s\n", __FILE__);

	return (0);
}
