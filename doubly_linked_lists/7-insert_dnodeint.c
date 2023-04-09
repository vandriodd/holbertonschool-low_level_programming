#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to address
 * @idx: index where the node should be added
 * @n: int data
 *
 * Return: address of new node,
 * NULL in case of failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL, *tmp = *h;
	unsigned int i = 1;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n; /* stores data */

	if (idx == 0)
	{
		node = add_dnodeint(h, n); /* adds the node to the beginning */
		return (node);
	}

	while (i < idx && tmp) /* otherwise, traverse the list to the index */
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp)
		return (NULL);

	if (!tmp->next)
	{
		node = add_dnodeint_end(h, n); /* adds the node at the end */
		return (node);
	}

	node->next = tmp->next; /* both next positions of the ptrs are linked */
	node->prev = tmp;
	tmp->next = node;

	if (node->next)
		node->next->prev = node; /* next node points to the new node */

	return (node);
}
