#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to be pirnt
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
