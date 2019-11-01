#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: list to be counted
 * Return: numbers of elements
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
