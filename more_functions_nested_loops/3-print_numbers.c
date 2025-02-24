#include "main.h"
/**
 * print_numbers - display number 0 a 9
 *
 * no Return
 */
void print_numbers(void)
{
	int a = 0;

	for (; a < 10 ; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
