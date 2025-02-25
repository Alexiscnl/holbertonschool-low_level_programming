#include "main.h"
/**
 * print_rev - print sentence reverse
 *@s: adresse
 *
 * no Return
 */
void print_rev(char *s)
{
	char *one = s;

	while (*s != '\0')
	{
		s++;
	}
	while (s != one)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');

}
