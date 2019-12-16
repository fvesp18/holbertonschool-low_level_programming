#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at nth index
 * @head: head of list
 * @index: nth index
 * Return: NULL if node doesnt exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int cmp = 0;

	while (ptr != NULL)
	{
		if (cmp == index)
		{
			return (ptr);
		}
		cmp = cmp + 1;
		ptr = ptr->next;
	}
	return (ptr);
}
