#include "main.h"
/**
 * _sqrt_helper - Helper function to calculate the square root.
 * @n: The number whose square root is to be found.
 * @i: The iterator value that will test squares incrementally.
 *
 * Return: The square root if it exists, otherwise -1.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the square root of a number n.
 * @n: The number whose square root is to be found.
 *
 * Return: The square root of n if it's a perfect square, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
