#include "main.h"

/**
 * _atoi - coberts string to int
 * @s: pointer to string
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 1;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
		res = (res * 10) + (s[i] - '0');
	return (sign * res);
}
