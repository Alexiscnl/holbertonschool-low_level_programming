#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - Applies a function to each element of an array
 * @array: Pointer to the array of integers
 * @size: The size of the array
 * @action: Pointer to the function to apply to each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
