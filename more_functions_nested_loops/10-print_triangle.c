#include "main.h"
/**
 * print_triangle - print tiangle whit #
 *@size: size of the triangle
 *
 * no Return
 */
void print_triangle(int size)
{
	int a, b, space;

	if (size <= 0)
	{
		_putchar('\n');

	}

	else
	{
		for (a = 1; a <= size; a++)
		{
			for (space = size - a; space > 0; space--)
			{
				_putchar(' ');
			}

			for (b  = 1; b <= a; b++)
			{
				_putchar('#');
			}

		_putchar('\n');
		}
	}
}
