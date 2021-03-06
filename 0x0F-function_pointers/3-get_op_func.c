#include "3-calc.h"

/**
 * get_op_func - calls operator function
 * @s: type of operators
 * Return: NULL, on success
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if ((*ops[i].op == *s) && !(s + 1))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
