#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count = count + 1;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
