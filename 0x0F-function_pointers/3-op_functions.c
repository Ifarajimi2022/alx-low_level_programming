#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the addition of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the subtraction of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the mod of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the mod of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
