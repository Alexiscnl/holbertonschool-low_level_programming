#include "main.h"
/**
 * puts_half - Write a function that prints half of a string, followed
 *by a new line.
 *@str: stock the number
 *
 * no Return
 */
void puts_half(char *str)
{
	int len, start, i;

	for (len = 0; str[len] != '\0'; )
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}
	for (i = start; i != len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
