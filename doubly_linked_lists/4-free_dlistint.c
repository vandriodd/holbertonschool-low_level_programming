#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to address
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head, *tmp;

	while (node) /* while the aux ptr exists, it loops through the list */
	{
		tmp = node->next; /* sets tmp to next node */
		free(node); /* and frees the prev node */
		node = tmp;
	}
}
