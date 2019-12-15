#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
	}
}
