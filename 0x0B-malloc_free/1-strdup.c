#include "main.h"
#include <stdlib.h>

/**
 * _strdup - string duplicate
 * @str: string to be duplicate
 * Return: a pointer to the duplicated string, NULL if not
 */

char *_strdup(char *str)
{
	int b = 0, n = 1;
	char *s;
	
	if (str == NULL)
		return (NULL);
	while (str[n])
	{
		n++;
	}
	s = malloc((sizeof(char) * n) + 1);
	if (s == NULL)
		return (NULL);
	while (b < n)
	{
		s[b] = str[b];
		b++;
	}
	s[b] = '\0';
	return (s);
}
