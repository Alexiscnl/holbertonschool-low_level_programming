#include "main.h"
/**
 * more_numbers - print 0 a 14
 *
 * no Return
 */
void more_numbers(void)
{
	int num1;
	int ligne;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (num1 = 0; num1 < 15; num1++)
		{
			if (num1 >= 10)
			{
			_putchar((num1 / 10) + '0');
			}

			_putchar((num1 % 10) + '0');
		}
		_putchar('\n');
	}
}
