#include<stdio.h>
/**
 * main - for loop print 0-9, A-F
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int ch;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (ch = 61; a <= 66; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
