#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: Character to be checked
 * Return: 1 for alphabet and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 45 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
