#include "lists.h"

/**
 * get_dnodeint_at_index - gets the index of a node
 * @head: pointer to address
 * @index: index of the node
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (!node)
		return (NULL);

	while (i < index && node)
	{
		node = node->next;
		i++;

		if (!node)
			return (NULL);
	}
	return (node);
}
