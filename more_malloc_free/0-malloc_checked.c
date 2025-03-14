#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 ** malloc_checked - Allocates memory using malloc
 * @b: The size of memory to allocate
 *
 * Return: Pointer to allocated memory
 * If malloc fails, the function terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
