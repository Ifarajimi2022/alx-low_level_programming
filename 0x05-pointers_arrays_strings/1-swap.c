#include <stdio.h>
/**
 * swap_int - swaps the value of two integer
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the functions that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
