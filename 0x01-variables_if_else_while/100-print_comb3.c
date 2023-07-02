#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */

int main(void)
{
	int i, a;

	for (i = '0'; i < '9'; i++)
	{

	for (a = i + 1; a <= '9'; a++)
	{
	if (a != i)
	{
	putchar(i);
	putchar(a);
	if (i == '8' && a == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
