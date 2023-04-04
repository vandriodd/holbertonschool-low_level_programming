#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the struct to be free
 */

void free_list(list_t *head)
{
	list_t *node = head;

	while (head)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
