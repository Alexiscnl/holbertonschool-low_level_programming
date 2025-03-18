#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 *
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int total = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}



	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(args, int);
	}

	va_end(args);
	return (total);
}
