#include "main.h"
/**
 * _abs - prints abs value
 * @n: char to print
 * Return: 0 on success
 */
int _abs(int n)
{

	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n + n + n);
	}
	return (0);
}
