#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets length of string
 * @s: pointer to string
 * Return: string length
 */

size_t _strlen(char *s)
{
	size_t len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * str_concat - concatenates string
 * @s1: str 1
 * @s2: str 2
 * Return: s3 which is = s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j;
	size_t i;

	s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	for (i = 0; i < _strlen(s1); i++)
	{
		if (s3 == NULL)
			return (NULL);
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
