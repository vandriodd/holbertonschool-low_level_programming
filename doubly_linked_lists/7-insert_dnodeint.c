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

	if (!tmp)
		return (NULL);

	if (idx == 0) /* adds the node at beginning */
		node = add_dnodeint(h, n);
	else
	{
		while (i < idx && tmp) /* otherwise, traverse the list to the index */
		{
			tmp = tmp->next;
			i++;
		}

		if (tmp->next == NULL)
			node = add_dnodeint_end(h, n);
		else
		{
			node = malloc(sizeof(dlistint_t));
			if (!node)
				return (NULL);

			node->n = n;
			node->next = tmp->next; /* both next positions of the ptrs are linked */
			node->prev = tmp;
			tmp->next = node;
			node->next->prev = node; /* next node points to the new node */
		}
	}

	return (node);
}
