#include "lists.h"
/**
 * add_node - adds node to beg of list
 * @head: head of list
 * @str: string
 * Return: something
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node)
	{
		if (node == NULL)
			return (NULL);

		node->str = strdup(str);
		node->len = strlen(str);
		node->next = *head;
		*head = node;
	}
	return (node);
}
