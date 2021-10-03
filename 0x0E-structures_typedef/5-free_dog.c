#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free space alloc in heap for dog_t d
 * @d: pointer to struct dog
 * Return: void, freed memory
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
