#include<stdio.h>
/**
 * main - for loop print 0-9
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
