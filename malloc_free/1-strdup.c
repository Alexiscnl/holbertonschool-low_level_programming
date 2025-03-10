#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _lenght - Calculates the length of a string.
 * @b: The string whose length is to be calculated.
 *
 * Return: The length of the string.
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
 * _strdup - Creates a duplicate of a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc((_lenght(str) + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}

