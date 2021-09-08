#include "main.h"

/**
 * puts2 - print other char in the string
 * @str: pointer to the string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			;
	}
	_putchar('\n');
}
