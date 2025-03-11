#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if an error occurs.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *p;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	p = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (ptr);
}
