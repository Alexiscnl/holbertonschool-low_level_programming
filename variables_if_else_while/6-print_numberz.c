#include <stdio.h>
/**
 * main - print number
 *
 * Return: 0
 */
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
	putchar(number++);
	}
	putchar('\n');
	return (0);
}
