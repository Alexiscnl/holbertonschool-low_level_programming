#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum integer value
 * @max: The maximum integer value
 *
 * Return: Pointer to the newly allocated array
 *         NULL if min > max or if memory allocation fails
 */
int *array_range(int min, int max)
{
	int i, index;
	int *ptr;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	 ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min, index = 0; i <= max; i++, index++)
	{
		ptr[index] = i;
	}
	return (ptr);
}
