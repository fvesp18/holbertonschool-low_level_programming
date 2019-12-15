#include "lists.h"
/**
 * add_dnodeint_end - adds node to end of linked list
 * @head: head of the node
 * @n: element of node
 * Return: address of new element, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;
	new->prev = ptr;
	new->next = NULL;
	return (new);
}
