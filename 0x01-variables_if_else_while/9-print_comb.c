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

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
