#include "main.h"

/**
 * _strspn - gets length of substring
 * @s: pointer to string
 * @accept: pointer to substring
 * Return: number of bytes in s which
 *	consists of bytes from accept consecutively
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, absent, present = 0;

	while (*s)
	{
		i = 0;
		absent = present;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
			{
				present++;
			}
			i++;
		}
		if (absent == present)
			break;
		s++;
	}
	return (present);
}
