#include "main.h"

/**
 * _strlen_recursion - gets string len using recursion
 * @s: pointer to string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
