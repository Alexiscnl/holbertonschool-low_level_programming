#include "main.h"
/**
 * _puts - print sentence
 *@str: pointer towards sentence
 *
 * no Return
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
