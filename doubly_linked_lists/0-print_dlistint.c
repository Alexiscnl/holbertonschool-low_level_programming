#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to the first node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h !=  NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
