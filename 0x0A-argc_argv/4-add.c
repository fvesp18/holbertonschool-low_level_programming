#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add all positive nums
 * @argc: arguments counter
 * @argv: arugments vector
 * @arg1: iterator for arg1
 * @arg2: iterator for arg2
 * @sum: summation fo arg1 & arg2
 * Return: 0, upon success
 */

int main(int argc, char **argv)
{

	int arg1;
	int arg2;
	int sum = 0;

	if (argc < 0)
	{
		printf("0\n");
	}

       	for (arg1 = 1; arg1 < argc; arg1++)
       	{
       	       	sum += atoi(argv[arg1]);

		for (arg2 = 0; argv[arg1][arg2] != '\0'; arg2++)
       		{
			if (!(isdigit (argv[arg1][arg2])))
			{
				printf("Error\n");
				return (0);
			}
		}
       	}
       	printf("%d\n", sum);
	return (0);
}
