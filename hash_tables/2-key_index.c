#include "hash_tables.h"

/**
 * key_index - calculates the index of a given key
 * @key: key to hash
 * @size: size of the array
 *
 * Return: index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key); /* hashing */
	return (index % size);
}
