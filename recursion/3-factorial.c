#include "main.h"
/**
 * factorial - return the factorial
 *@n:The integer for which we want to calculate the factorial
 *
 * Return: The factorial of n, or -1 if n is less than 0 (error).
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
