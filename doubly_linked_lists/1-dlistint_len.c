#include "lists.h"

/**
 * dlistint_len - obtains the length of linked list
 * @h: pointer to list
 *
 * Return: number of elements of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
