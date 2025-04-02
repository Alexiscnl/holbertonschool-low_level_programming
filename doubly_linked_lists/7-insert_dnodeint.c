#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Data (n) of the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (*h == NULL && idx > 0)
		return (NULL);

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
