#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character.
 * @c: The character to print.
 * Return: On success 1. ON error, -1.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
