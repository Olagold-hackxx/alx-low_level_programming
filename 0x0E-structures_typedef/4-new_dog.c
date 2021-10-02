#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - copy and store struct
 * @name: pointer element of struct dog
 * @age: element of struct dog
 * @owner: pointer to element of struct
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(dog_t) * _strlen(name));
	if (dog->name == NULL)
		return (NULL);
	dog->owner = malloc(sizeof(dog_t) * _strlen(owner));
	if (dog->name == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

/**
 * _strlen - get string length
 * @s: pointer to string
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
