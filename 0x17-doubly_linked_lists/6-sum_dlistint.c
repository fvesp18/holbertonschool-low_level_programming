#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the nth elements of the linked list
 * @head: head
 * Return: sum of all nth elements, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int summation = 0;

	if (!head)
	{
		return (0);
	}
	else
	{
		while (head)
		{
			summation += head->n;
			head = head->next;
		}
		return (summation);
	}
}
