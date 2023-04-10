#include "lists.h"

/**
 * delete_dnodeint_first - deletes the first node of a list
 * @head: pointer to address of first node
 *
 * Return: 1 if success, -1 if not
 */
int delete_dnodeint_first(dlistint_t **head)
{
	dlistint_t *tmp = *head;

	if (!head || !(*head))
		return (-1);

	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;

	free(tmp);
	return (1);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to address
 * @index: index of the node that should be deleted
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (!head)
		return (-1);

	if (index == 0) /* if it is the first node */
		return (delete_dnodeint_first(head));

	while (i < index && node)
	{
		node = node->next;
		i++;
	}

	if (i != index)
		return (-1);

	if (!node->next) /* if it is the last node */
	{
		node->prev->next = NULL;
		free(node);
		return (1);
	}

	if (*head)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		free(node);
		return (1);
	}

	return (-1);
}
