#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a', A = 'A';

	while (a <= 'z')
	{
		putchar(a++);
	}
	while (A <= 'Z')
	{
		putchar(A++);
	}
	putchar('\n');
	return (0);
}
