#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */

int main(void)
{
	int i, a, d;

	for (i = '0'; i < '9'; i++)
	{
	for (a = i + 1; a <= '9'; a++)
	{
	for (d = a + 1; d <= '9'; d++)
	{
	if ((a != i) != d)
	{
	putchar(i);
	putchar(a);
	putchar(d);
	if (i == '7' && a == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
