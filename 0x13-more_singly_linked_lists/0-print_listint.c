#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a listint_t list.
 * @h: A pointer to the head of list_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
