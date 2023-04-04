#include "lists.h"

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
 * _strdup - duplicates a string
 * @str: string input to be duplicated
 *
 * Return: string duplicate
 */
char *_strdup(const char *str)
{
	unsigned int i = 0, len = _strlen(str) + 1; /* null char */
	char *dup = NULL;

	if (!str)
		return (NULL);

	dup = malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}

/**
 * add_node - adds a new node to the list
 * @head: pointer to address
 * @str: string
 *
 * Return: address of the new element,
 * NULL in case of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = _strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
