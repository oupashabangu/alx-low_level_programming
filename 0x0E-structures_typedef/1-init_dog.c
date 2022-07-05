#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variable type
 * @d: pointer
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
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
