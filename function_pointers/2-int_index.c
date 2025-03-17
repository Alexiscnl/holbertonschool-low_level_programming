#include "function_pointers.h"
/**
 * int_index - Searches for the index of the first matching element in the
 *array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: The comparison function.
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
