#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: list to be counted
 * Return: numbers of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int cnt;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
