#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
 /**
 * free_dlistint - Frees a doubly linked list
 * @head: The head of the list to be freed
 *
 * Description: This function traverses the list, freeing each node.
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
