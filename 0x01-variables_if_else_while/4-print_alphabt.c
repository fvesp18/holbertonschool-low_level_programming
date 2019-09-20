#include<stdio.h>

/**
 * main - if q or e , dont print if a - z putchar
 *
 * Return: 0
 */

int main(void)
{
	char ch = 97;

	while  (ch >= 97 && ch <= 122)
	{
		if (ch != 101 && ch != 113)
			putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
