#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
  * @head: The head of the doubly linked list.
  * @n: The number to place in the new node
  * Return: The new head of the doubly linked list.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *mg = *(head);

	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	*(head) = newnode;
	newnode->n = n;
	newnode->prev = NULL;

	if (mg == NULL)
		newnode->next = NULL;
	else
	{
		newnode->next = mg;
		mg->prev = *(head);
		mg = NULL;
	}

	return (newnode);
}
