#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: original linked list
 * @str: node to be add
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
