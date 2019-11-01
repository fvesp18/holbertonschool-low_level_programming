#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list of elements to be printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int b = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		b++;
	}
	return (b);
}
