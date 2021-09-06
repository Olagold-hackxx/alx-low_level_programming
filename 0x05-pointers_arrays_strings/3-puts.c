#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer to string
 * Return: void
 */

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
