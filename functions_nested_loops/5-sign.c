#include "main.h"
/**
 * print_sign - if n > 0 print + and return 1, if n is equal 0 print 0
 *and return 0, otherwise print - and return -1
 *@n: caracter
 *
 * Return: +, 1 if n > 0, 0, 0 if n = 0, -, 1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
