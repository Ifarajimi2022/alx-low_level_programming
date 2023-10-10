#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *b, t = 0;

	if (min > max)
		return (NULL);
	b = malloc((sizeof(int) * (min - max)) + sizeof(int));
	if (b == NULL)
		return (NULL);
	while (min <= max)
	{
		b[t] = min;
		t++;
		min++;
	}
	return (b);
}
