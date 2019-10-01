#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: pointer
 * @n: some integer
 */

void print_array(int *a, int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
	{
		if (loop < (n - 1))
		{
			printf("%d, ", a[loop]);
		}
	        else
		{
			printf("%d", a[loop]);
		}
	}
	putchar('\n');
}
