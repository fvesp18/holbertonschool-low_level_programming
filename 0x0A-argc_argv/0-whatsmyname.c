#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int ind;
	for (ind = 0; ind < argc; ind++)
       	{
       		printf("%s\n", *argv);
       	}
	return (0);
}
