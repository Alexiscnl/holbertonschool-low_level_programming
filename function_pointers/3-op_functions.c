#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts the second integer from the first
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides the first integer by the second
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a / b if b is not 0
 * Exit the program with code 100 if b is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}
/**
 * op_mod - Finds the remainder of the division of the first integer by the
 * second
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a % b if b is not 0
 * Exit the program with code 100 if b is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}

