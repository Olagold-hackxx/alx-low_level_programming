#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets string length
 * @s: pointer to string
 * Return: string length
 */

size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
* _strdup - duplicate string and allocate with malloc
* @str: string to duplicate
* Return: duplicate
*/

char *_strdup(char *str)
{
	size_t i;
	char *s;

	if (!*str)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str) + 1));

	for (i = 0; i < _strlen(str); i++)
	{
		if (s == NULL)
			return (NULL);
		s[i] = str[i];
	}
	s[i] = '\0';
	return (char);
}
