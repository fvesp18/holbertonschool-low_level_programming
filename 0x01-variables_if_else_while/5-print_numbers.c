#include<stdio.h>
/**
 * main - for loop print 0-9
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	if (a >= 0 && a <= 9)
	    for (a = 0; a <= 9; a++)
		    printf ("%d", a);

	return (0);
}
