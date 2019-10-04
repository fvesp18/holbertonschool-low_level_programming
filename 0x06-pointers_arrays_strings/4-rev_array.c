#include "holberton.h"

void reverse_array(int *a, int n)
{
	int i = 0;
	int buffer;
	n = n - 1;

	while (i < n)
	{

		buffer = a[n];
		a[n] = a[i];
		a[i] = buffer;

		i++;
		n--;
	}

}
