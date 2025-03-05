#include "main.h"
#include <math.h>
/**
 * is_two_function - Recursive helper function to check if n is divisible by i
 * @n: The number to check
 * @i: The current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 *
 */
int is_two_function(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_two_function(n, i + 1));
}
/**
 * is_prime_number - Main function to check if n is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_two_function(n, 2));
}
