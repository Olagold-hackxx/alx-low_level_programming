#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates bytes of s2 to s1
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes of s2 to be concatenated
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len, len2;

	if (s1 == NULL)
		len = 0;
	else
		len = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	if (len2 > n)
		len2 = n;

	str = malloc(sizeof(char) * (len + len2 + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
/**
 * _strlen - gets string length
 * @s: pointer to string
 * Return: string length
 */

int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
