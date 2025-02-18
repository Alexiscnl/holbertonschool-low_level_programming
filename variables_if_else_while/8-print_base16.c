#include <stdio.h>
/**
 * main - print number and lettre
 *
 * Return: 0
 */
int main(void)
{
	char number = '0';
	int a = 'a';

	while (number <= '9')
	{
	putchar(number++);
	}
	while (a <= 'f')
	{
	putchar(a++);
	}
	putchar('\n');
	return (0);
}
