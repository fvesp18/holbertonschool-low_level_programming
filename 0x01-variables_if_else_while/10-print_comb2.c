#include<stdio.h>
/**
 * main - for loops and more
 *
 *
 * Return: 0
 */

int main(void)
{
	int first;
	int second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			putchar(first);
			putchar(second);

			if (!(first == '9' && second == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
