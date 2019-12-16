#include "lists.h"
/**
 * delete_dnodeint_at_index = deletes node at index
 * @head: head of list
 * @index: point of deletion
 * Return: 1, if succeed. else, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *buff = *head;
	unsigned int cmp = 0;

	buff = malloc(sizeof(dlistint_t));
		if (buff == NULL)
			return (-1);

	buff->prev = NULL;
	buff->next = NULL;

	if (!*head || !buff)
		return (-1);
	if (*head == buff)
		*head = buff->next;
	if (buff->next)
		buff->next->prev = buff->prev;
	if (buff->prev)
		buff->prev->next = buff->next;
	free(buff);
	return (1);

	for (cmp = 0; buff != NULL && cmp < index - 1; cmp++)
	{
		buff->next = (*head)->next;
	}
	buff->next = NULL;
}
