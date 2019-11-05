#include "lists.h"
/**
 * add_nodeint - adds a node to linked list
 * @head: head of list
 * @n: node number
 * Return: Address of new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode)
	{
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
