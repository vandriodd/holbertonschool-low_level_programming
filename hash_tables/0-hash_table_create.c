#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the hash table,
 * NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	newTable = malloc(sizeof(hash_table_t));
	if (!newTable)
		return (NULL);

	newTable->size = size;
	/* newTable->size = length, hash_node_t * = size of elements */
	newTable->array = calloc(newTable->size, sizeof(hash_node_t *));
	if (!newTable->array)
		return (NULL);

	return (newTable);
}
