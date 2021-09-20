#include "main.h"

/**
 * _pow_recursion - power int x by y recursively
 * @x: base
 * @y: power
 * Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}