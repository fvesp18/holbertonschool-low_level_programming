#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0, upon success
 */

int main(int argc, char **argv)
{
	int ind;

	for (ind = 0; ind < argc; ind++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
