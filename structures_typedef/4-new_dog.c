#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	dog_t *copy;

	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
	{
		return (NULL);
	}
	copy->name = malloc(strlen(name) + 1);
	if (copy->name == NULL)
	{
		free(copy);
		return (NULL);
	}
	strcpy(copy->name, name);

	copy->owner = malloc(strlen(owner) + 1);
	if (copy->owner == NULL)
	{
		free(copy->name);
		free(copy);
		return (NULL);
	}
	strcpy(copy->owner, owner);

	copy->age = age;

	return (copy);
}
