#include "lists.h"
/**
 * insert_dnodeint_at_index - adds node at index
 * @h: head of list
 * @idx: index
 * @n: element
 * Return: address of new node, NULL if else
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *new = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	for (i = 2; i <= idx - 1; i++)
	{
		ptr = ptr->next;
	}

	new->next = ptr->next;
	ptr->next = new;
	return (*h);
}