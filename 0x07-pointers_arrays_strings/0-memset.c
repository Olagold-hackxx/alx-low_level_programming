#include <stdio.h>

/**
 * _memset - fill first n byte of memory area s is pointed to by byte b
 * @s: pointer to array
 * @b: constant byte
 * @n: first number of bytes
 * Return: pointer s with byte b filled in n times
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
