#include "hash_tables.h"
/**
 * key_index - produces index of key
 * @key: key in question
 * @size: size of the array/ hashtable
 * Return: index of hashtable where key stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
