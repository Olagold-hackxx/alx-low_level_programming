#include <stdlib.h>

/**
 * print_name - func pointer
 * @name: pointer to char
 * @f: function to point to
 * Return: function pointed to
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
