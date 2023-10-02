#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string to return the length
 * Return: Integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
