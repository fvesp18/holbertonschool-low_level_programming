#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *root;

	if (size < 1)
		return (NULL);

	root = malloc(sizeof(hash_table_t));

	if (root == NULL)
		return (NULL);

	root->array = malloc(size * sizeof(unsigned long int));

	if (root->array == NULL)
		return (NULL);

	memset(root->array, 0, size);

	root->size = size;

	return (root);
}
