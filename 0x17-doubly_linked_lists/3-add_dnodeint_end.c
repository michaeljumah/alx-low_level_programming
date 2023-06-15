#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - New node at the beginning of a dlistint_t list.
 * @head: The head of the doubly linked list.
 * @n : New data.
 * Return: Number of elements in a linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		newnode->next = NULL;
		newnode->prev = current;
		current->next = newnode;
		return (newnode);
	}

	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (*head);
}
