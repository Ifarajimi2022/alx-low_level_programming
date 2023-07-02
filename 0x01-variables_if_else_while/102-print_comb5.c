#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */

int main(void)
{
	int a, d;

	for (a = 0; a <= 98; a++)
	{
	for (d = a + 1; d <= 99; d++)
	{
	putchar((a / 10) + '0');
	putchar((a % 10) + '0');
	putchar(' ');
	putchar((d / 10) + '0');
	putchar((d % 10) + '0');
	if (a == 98 && d == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
