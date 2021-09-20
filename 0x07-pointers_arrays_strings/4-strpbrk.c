#include "main.h"

/**
 * _strpbrk - search for str A in str B
 * @s: pointer to str B
 * @accept: pointer to str A
 * Return: str B from 1st occurence of char in str A
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
