#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	head = NULL;
}
