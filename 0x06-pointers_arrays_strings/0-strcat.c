#include "main.h"

/**
 * *_strcat - concatenates string
 * @dest: string to concatenate to
 * @src: string to be concatenated
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * _strlen - prints length of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}
