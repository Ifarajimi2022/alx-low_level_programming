#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable name
 * @d: pointer to initializes
 * @name: name to initializes
 * @age: age to initializes
 * @owner: owner to initializes
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
