#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: The original node
 * @str: The node to be add at the end
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dada, *ayo;
	size_t n;

	dada = malloc(sizeof(list_t));
	if (dada == NULL)
		return (NULL);
	dada->str = strdup(str);
	for (n = 0; str[n]; n++);
	dada->len = n;
	dada->next = NULL;
	ayo = *head;
	if (ayo == NULL)
	{
		*head = dada;
	}
	else
	{
		while (ayo->next != NULL)
			ayo = ayo->next;
		ayo->next = dada;
	}
	return (*head);
}
