#include<stdio.h>
/**
 * main - declare ch, run for loop to print alphabet, end new line
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
