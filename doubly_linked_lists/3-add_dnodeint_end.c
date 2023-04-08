#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to address
 * @n: int data
 *
 * Return: tha address of the new node,
 * NULL in case of failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *temp = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head) /* if the list is empty newNode was the only node */
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	else
		temp = *head;

	while (temp->next) /* if not, traverse the list to reach the last node */
	{
		temp = temp->next;
	}

	/* temp points to the last node, so */
	temp->next = newNode; /* the next node to the last one will be newNode */
	newNode->prev = temp; /* the pre-newNode is now the old last node */
	newNode->next = NULL;
	return (newNode);
}
