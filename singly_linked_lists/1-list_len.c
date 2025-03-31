#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
