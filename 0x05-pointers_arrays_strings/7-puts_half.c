#include "main.h"

/**
 * puts_half - puts last half of string
 * @str: ppinter to string
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, len;

	len = _strlen(str);

	if ((len % 2) == 0)
	{
		n = len / 2;
		for (i = n; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n; i < len - 1; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
int _strlen(str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}
