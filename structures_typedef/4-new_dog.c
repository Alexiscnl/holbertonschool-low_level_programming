#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
 * new_dog - Creates a new dog instance using a struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: copy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *copy;

	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
	{
		return (NULL);
	}
	copy->name = malloc(_lenght(name) + 1);
	if (copy->name == NULL)
	{
		free(copy);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		copy->name[i] = name[i];
	}
	copy->name[i] = '\0';

	copy->owner = malloc(_lenght(owner) + 1);
	if (copy->owner == NULL)
	{
		free(copy->name);
		free(copy);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
		copy->owner[j] = owner[j];
	}
	copy->owner[j] = '\0';

	copy->age = age;

	return (copy);
}
