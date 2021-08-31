#include "main.h"
/**
 * print_sign - print signs of char
 * @n: char whose signs are printed
 * Return: 1 on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		return (-1);
	}
}
