#include <unistd.h>

/**
 * _putchar - Write character c to stdout.
 * @c: character to be print.
 * Return: 1 on success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
