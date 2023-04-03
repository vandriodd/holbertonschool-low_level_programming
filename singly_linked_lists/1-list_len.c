#include "lists.h"

/**
 * list_len - counts elements
 * @h: pointer to struct
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
