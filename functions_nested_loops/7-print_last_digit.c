#include "main.h"

/**
 * print_last_digit - dysplay the last digit
 * @n: the number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
	last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
