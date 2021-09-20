#include "main.h"

/**
 * _strstr - finds first occurence of substring B in string A
 * @haystack: pointer to string A
 * @needle: pointer to substring B
 * Return: first occurence of substring B in string A
 */

char *_strstr(char *haystack, char *needle)
{
	char *occur;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occur = haystack;
			while (*needle)
			{
				if (*haystack++ != *needle++)
					haystack = occur;
				if (*haystack != *occur)
					return (occur);
				needle++;
			}
		}
		haystack++;
	}
	return (0);
}
