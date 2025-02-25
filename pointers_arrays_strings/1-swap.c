#include "main.h"
/**
 * swap_int - change variable
 *@a: pointer 98
 *@b: pointer 42
 *
 * no Return
 */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
