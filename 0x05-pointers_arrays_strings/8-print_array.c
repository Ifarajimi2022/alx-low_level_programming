#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integer
 * @a: Array of integers
 * @n: Number of element of an array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (j - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
