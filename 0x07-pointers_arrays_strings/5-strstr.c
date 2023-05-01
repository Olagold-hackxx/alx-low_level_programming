#include "main.h"

/**
 * _strstr - finds first occurence of substring B in string A
 * @haystack: pointer to string A
 * @needle: pointer to substring B
 * Return: first occurence of substring B in string A
 */

char *_strstr(char *haystack, char *needle)
{
	int i, hay_cnt, match = 0;

	/* loop through haystack string */
	for (hay_cnt = 0; haystack[hay_cnt] != '\0'; hay_cnt++)
	{
		if (haystack[hay_cnt] == needle[0])
		{
			for (i = 0; needle[i] != '\0';)
			{
				/* comparing haystack to needle sequence */
				if (haystack[hay_cnt + i] == needle[i])
				{
					match = 1;
				}
				else
				{
					match = 0;
					break;
				}
				i++;
			}
			if (match)
				return ((haystack + hay_cnt));
		}
	}
	if (needle[0] == '\0')
		return (haystack);
	return ('\0');
}
