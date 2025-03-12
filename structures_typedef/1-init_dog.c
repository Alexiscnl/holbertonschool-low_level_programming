#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the dog struct to be initialized
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the dog's owner's name
 *
 * Description: This function initializes the fields of a struct dog
 * with the given values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
