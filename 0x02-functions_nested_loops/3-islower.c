#include "main.h"
/**
 * _islower - prints lower case alpha
 * @c: lowercas char to print
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
