#include "main.h"

/**
 * *_strncat - concatenates n string
 * @dest: string to concatenates to
 * @src: string to be concatenated
 * @n: length of string to be concatenated
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * _strlen - string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}
