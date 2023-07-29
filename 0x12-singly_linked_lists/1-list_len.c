#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Count the number of elements of a list
 * @a: A linked list
 * Return: The number of elements of a list
 */

size_t list_len(const list_t *a)
{
	size_t count = 0;

	while (a)
	{
		a = a->next;
		count++;
	}
	return (count);
}
