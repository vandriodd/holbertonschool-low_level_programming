#include "lists.h"
#include <string.h>

/**
 * _strlen - determines the length of string
 * @str: string input
 *
 * Return: length of str
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * add_node_end - adds new node at the end of the list
 * @head: pointer to address
 * @str: string
 *
 * Return: address of the new node,
 * NULL in case of failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL, *lastNode = *head;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	newNode->next = NULL;

	/* if the list doesn't contains nodes, the pointer points to newNode */
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	/* else, go through the list to the end */
	while (lastNode->next)
		lastNode = lastNode->next;

	lastNode->next = newNode;

	return (newNode);
}
