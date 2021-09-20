#include "main.h"

/**
 * _strchr - look for a char in a string
 * @s: pointer to string
 * @c: char to look for
 * Return: Return pointer to the string starting from 
 *         first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (0);
}
