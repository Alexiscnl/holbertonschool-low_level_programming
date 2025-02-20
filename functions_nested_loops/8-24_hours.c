#include "main.h"
/**
 * jack_bauer - print heur sur 24h
 *
 * no return
 */
void jack_bauer(void)
{
	int heur = 0;
	int min = 0;
	char sep = ':';

	for (heur = 0; heur < 24; heur++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((heur / 10) + '0');
			_putchar((heur % 10) + '0');
			_putchar(sep);
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
