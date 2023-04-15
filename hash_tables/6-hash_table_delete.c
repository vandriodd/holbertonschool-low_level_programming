#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux, *tmp;
	size_t i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			tmp = aux->next; /* tmp points to the next node that aux points to */
			free(aux->key);
			free(aux->value);
			free(aux);
			aux = tmp; /* aux moves to where tmp points */
		}
		i++;
	}
	free(ht->array);
	free(ht); /* free table */
}
