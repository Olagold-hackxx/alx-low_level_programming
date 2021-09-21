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
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j;
	size_t i;

	s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
