#include "main.h"
/**
 * times_table - print multiplicateur de 0 a 9
 *
 * no Return parce que void
 */
void times_table(void)
{
	int somme, num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			somme = num1 * num2;

			if (num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (somme < 10)
					_putchar(' ');
			}
			if (somme >= 10)
			{
				_putchar((somme / 10) + '0');
				_putchar((somme % 10) + '0');
			}
			else
			{
				_putchar(somme + '0');
			}
		}
	_putchar('\n');
	}
}
