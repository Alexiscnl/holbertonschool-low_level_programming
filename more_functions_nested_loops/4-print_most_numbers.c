#include "main.h"
/**
 * print_most_numbers - display numbers except 2 and 4
 *
 * no Return
 */
void print_most_numbers(void)
{
	int numbers = 0;

	for (; numbers < 10; numbers++)
	{
		if (numbers == 2 || numbers == 4)
		{
			numbers++;
		}
		_putchar(numbers + '0');
	}
	_putchar('\n');
}
