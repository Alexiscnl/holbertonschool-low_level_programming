#include "main.h"
/**
 * print_square - print #
 *@size: number space
 *
 * no Return
 */
void print_square(int size)
{
	int b;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
