#include "holberton.h"

/**
 * _pow_recursion - power x to the val of y
 * @x: base parameter
 * @y: power parameter
 * Return: -1
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
