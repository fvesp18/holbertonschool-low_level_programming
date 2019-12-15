#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning of a list
 * @head: head
 * @n: node index
 * Return: address of new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
