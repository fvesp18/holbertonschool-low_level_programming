#include "holberton.h"

/**
 *
 *
 *
 */

void jack_bauer(void)
{
	int hr;
	int min1;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min1 = 0; min1 <= 59; min1++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min1 / 10) + '0');
			_putchar((min1 % 10) + '0');
			_putchar('\n');
		}
	}

}
