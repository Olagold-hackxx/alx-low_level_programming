#include "main.h"

/**
 * _memcpy - copies n byte from memory area
 * @dest: pointer to array which memory area is copied to
 * @src: pointer to array which memory area is copied
 * @n: number of times memory area copied
 * Return: array with copied n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
