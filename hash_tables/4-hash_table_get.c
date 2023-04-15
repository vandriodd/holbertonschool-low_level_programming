#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key
 *
 * Return: the key if it exists, NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *check_key; /* aux pointer */
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	check_key = ht->array[index];
	while (check_key)
	{
		if (strcmp(check_key->key, key) == 0) /* if the requested key exists */
			return (check_key->value); /* returns the value associated at the key */
		check_key = check_key->next;
	}

	return (NULL);
}
