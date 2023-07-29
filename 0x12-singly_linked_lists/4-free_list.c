#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees a list.
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *dada;

	while ((dada = head) != NULL)
	{
		head = head->next;
		free(dada->str);
		free(dada);
	}
}
