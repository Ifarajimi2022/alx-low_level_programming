#include <unistd.h>

/**
 * _putchar - writes c into stdout
 * @c: character to print
 * Return: 1 On success
 * On error: -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
