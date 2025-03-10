#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: The size of the array to be created
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;
	if (size == 0)
	{
		return NULL;
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return NULL;
	}
	for (; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
