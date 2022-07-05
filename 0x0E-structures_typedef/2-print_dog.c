#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog struct
 * @d: point
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)\n");
	else
		print("name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
