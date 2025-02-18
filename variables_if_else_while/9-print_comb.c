#include <stdio.h>
/**
 * main - print number virgul
 *
 * Return: 0
 */
int main(void)
{
	char number = '0';

	while (number <= '9')
	{
	putchar(number);
	if (number != '9')
	{
	putchar(',');
	putchar(' ');
	}
	number++;
	}
	putchar('\n');
	return (0);
}
