#include<stdio.h>
/**
 * main - two fors and a space
 *
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
		putchar(a);
		putchar(b);
		putchar(',');
		putchar(' ');
		}
		if (a == '9' && a== '9')
		{
			putchar(' ');
		}
	}
	return (0);
}
