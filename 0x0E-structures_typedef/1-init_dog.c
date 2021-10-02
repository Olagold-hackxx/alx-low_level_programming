#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initiate struct dog
 * @d: name of struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
