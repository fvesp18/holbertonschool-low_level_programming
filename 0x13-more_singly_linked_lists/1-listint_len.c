#include "lists.h"
/**
 * listint_len - returns number of node in linked list
 * @h: pointer to linked list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
