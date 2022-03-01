#include "main.h"

/**
 * factorial - gets the factorial of an int
 * @n: int to get factorial of
 * Return: factorial of the int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
