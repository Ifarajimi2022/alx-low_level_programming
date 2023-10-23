#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the function to perform the operation
 * @s: the operator passed as argument to the program
 * Return:  a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
