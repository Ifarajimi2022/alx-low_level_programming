#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @d: The list_t list.
 * Return: the number of nodes in d.
 */

size_t print_list(const list_t *d)
{
	size_t nodes = 0;

	while (d)
	{
	if (d->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", d->len, d->str);
	nodes++;
	d = d->next;
	}
	return (nodes);
}
