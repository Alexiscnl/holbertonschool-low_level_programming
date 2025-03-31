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
 * add_node - Ajoute un nœud en tête de liste.
 * @head: Pointeur vers le pointeur du premier élément de la liste.
 * @str: La chaîne de caractères à ajouter dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
