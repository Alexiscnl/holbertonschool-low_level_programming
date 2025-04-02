#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n) in a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: The sum of all data (n) in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
