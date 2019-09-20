#include<stdio.h>
/**
 * main - for loops and more
 *
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b = '9';

	for (a = '0'; a <= '8'; a++)
	{
		putchar(a);
		putchar(',');
	}
	putchar(b);
	putchar(' ');
	return (0);
}
