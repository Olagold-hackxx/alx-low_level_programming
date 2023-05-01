#include "main.h"

/**
 * _strpbrk - search for str A in str B
 * @s: pointer to str B
 * @accept: pointer to str A
 * Return: str B from 1st occurence of char in str A
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				return (s);
		s++;
	}
	return ('\0');
}
