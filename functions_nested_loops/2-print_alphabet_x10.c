#include "main.h"
/**
 * print_alphabet_x10 - print 10x l'alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lettre = 'a';
	int ligne = 0;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (lettre = 'a'; lettre <= 'z'; lettre++)
		{
		_putchar(lettre);
		}
		_putchar('\n');
	}
}

