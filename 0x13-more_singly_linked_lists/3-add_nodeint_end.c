#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of list
 * @head: head of list
 * @n: list iterator
 * Return: address of new node, NULL if else
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode)
	{
		newnode->n = n;
		newnode->next = NULL;

		if (*head == NULL)
			*head = newnode;
		else
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}
	}
	else
	{
		return (NULL);
	}
	return (newnode);
}
