#include "lists.h"

/**
 * sum_dlistint - sums all the data of a linked list
 * @head: pointer to address
 *
 * Return: the sum of the data (n),
 * 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (!node)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
