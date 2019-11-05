#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int cnt = 0;

	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		cnt++;
	}
	return (cnt);
}
