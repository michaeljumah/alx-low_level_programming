#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 *delete_dnodeint_at_index - a function that deletes the node at index
 *index of a dlistint_t linked list.
 *@head: The head of the doubly linked list
 *@index: the index ro delete the node from
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return -1;

	if (index == 0)
	{
		dlistint_t *node_to_delete = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node_to_delete);
		return 1;
	}
	dlistint_t *current = *head;
	for (unsigned int i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return -1;
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return 1;
}
