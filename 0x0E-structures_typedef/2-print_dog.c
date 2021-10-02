#include <stdio.h>
#include "dog.h"
#define NUL "(nil)"

/**
 * print_dog - print struct
 * @d: name of struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = NUL;
	if (d->owner == NULL)
		d->owner = NUL;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
