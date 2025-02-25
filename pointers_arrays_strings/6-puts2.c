#include "main.h"
/**
 * puts2 - print 1 in 2 de 0 a 9
 *@str: number 0 a 9
 *
 * no Return
 */
void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
