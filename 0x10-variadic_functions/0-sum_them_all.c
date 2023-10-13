#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - to sum all the given parameters.
 * @n: parameter to be sum.
 * @...: variable
 * Return: if n == 0, return 0, if not sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for i(i = 0; i < n; i++)
	sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
