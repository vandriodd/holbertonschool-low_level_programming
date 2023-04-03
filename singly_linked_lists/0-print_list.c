#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to struct
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
