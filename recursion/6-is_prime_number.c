#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * is_prime_number - Recursive function to test divisibility
 * @n: The number to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	for (; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
