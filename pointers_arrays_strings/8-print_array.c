#include "main.h"
#include <stdio.h>
/**
 * print_array - print number in case
 *@a: case
 *@n: number
 *
 * no Return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}

	printf("\n");
}
