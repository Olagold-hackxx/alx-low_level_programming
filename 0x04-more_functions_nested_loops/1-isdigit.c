#include "main.h"

/**
 * _isdigit - prints digits
 * @c: digit to print
 * Return: 1 on success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
