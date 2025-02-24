#include "main.h"
/**
 *
 *
 *
 */
void print_most_numbers(void)
{
	int numbers = 0;

	for (; numbers < 10; numbers++)
	{
		_putchar(numbers + '0');
	
		if (numbers != 2 && numbers != 4)
		{
			numbers++;
		}
	}
	_putchar('\n');
}
