#include "main.h"
/**
 * print_diagonal - print \ diagonal
 *@n: number \
 *
 * no Return
 */
void print_diagonal(int n)
{
	int a;
	int b;

		if (n <= 0)
		{
			_putchar('\n');
		}
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}
