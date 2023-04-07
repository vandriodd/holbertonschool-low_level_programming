#include "lists.h"

/**
 * add_dnodeint - adds new node to list
 * @head: pointer to address
 * @n: int data
 *
 * Return: address of new element,
 * or NULL in case of failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n; /* stores data */
	newNode->prev = NULL; /* cuz new node comes first */

	if (*head)
	{
		(*head)->prev = newNode;
		newNode->next = *head;
	}
	else
		newNode->next = NULL;

	*head = newNode;
	return (newNode);
}
