#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _lenght - Calcule la longueur d'une chaîne de caractères.
 * @b: La chaîne de caractères dont la longueur doit être calculée.
 *
 * Return: La longueur de la chaîne.
 */
int _lenght(char *b)
{
	int a = 0;

	while (*b++)
	{
		a++;
	}
	return (a);
}
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to the pointer of the first node in the list.
 * @str: The string to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *copy;

	if (str == NULL)
		return (NULL);

	copy = strdup(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = copy;
	new_node->len = _lenght(copy);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
