#include "main.h"
/**
 * print_last_digit - print last digit
 * @c: int whose last digit will be printed
 * Return: c on success
 */
int print_last_digit(int c)
{
	c %= 10;
	if (c < 0)
	{
		c = -c;
	}
	_putchar(c + '0');
	return (c);
}
