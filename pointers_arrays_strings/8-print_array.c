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
	for (n = 0; n <= 3; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("%d\n", a[n]);
}
