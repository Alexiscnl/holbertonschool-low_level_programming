#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - count of 0 a 98 and revers
 *@n: is 0
 *
 * no Return void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
}
