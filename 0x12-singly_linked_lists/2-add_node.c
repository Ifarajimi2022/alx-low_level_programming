#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The original linked list
 * @str: The string to add tothe node
 * Return: The address of the new list or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ayo;
	int length = 0;

	ayo = malloc(sizeof(list_t));
	if (ayo == NULL)
		return (NULL);
	while (str[length])
		length++;
	ayo->len = length;
	ayo->str = strdup(str);
	ayo->next = *head;
	*head = ayo;
	return (ayo);
}
