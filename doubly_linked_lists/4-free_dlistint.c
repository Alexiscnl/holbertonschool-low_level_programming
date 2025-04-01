#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 * @head: The head of the list to be freed
 *
 * Description: This function traverses the doubly linked list,
 * freeing each node in the list. It starts from the head and
 * moves through the list, freeing each node's memory until
 * the end of the list is reached (when head is NULL).
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
