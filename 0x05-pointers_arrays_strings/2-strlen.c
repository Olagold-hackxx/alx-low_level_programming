#include "main.h"

/**
 * _strlen - print length of string
 * @s: pointer to array
 * Return: int
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
