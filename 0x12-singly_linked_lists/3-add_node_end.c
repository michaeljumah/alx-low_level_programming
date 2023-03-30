#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds new node containing a string to the end of a linked list
 *
 * @head: A pointer to the head of the linked list
 * @str: The string to add to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	char *str_copy = strdup(str);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->next = NULL;

	if (*head == NULL)
		head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
