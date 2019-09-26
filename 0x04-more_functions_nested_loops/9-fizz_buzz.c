#include "holberton.h"
#include <stdio.h>

/**
 * main - print fizz every 3, buzz every 5 and fizzbuzz for both
 * Return: void
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if (num >= 1 && num < 100)
		{
			if (num == 1)
			{
			printf("%d", num);
			putchar(32);
			}
			else if (num != 1)
			{
				putchar(32);
				printf("%d", num);
				putchar(32);
			}
		}
		num++;
	}
	putchar(10);
	return (0);
}
