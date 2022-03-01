#include "main.h"

/**
 * _sqrt_recursion - print square root of a number using recursion
 * @n: number to get its sqrt if has natural sqrt
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)/* error */
		return (-1);
	if (n == 0)/* base case */
		return (0);
	if (n == 1)
		return (1);
	return (find_sqrt(1, n));
}

/**
 * find_sqrt - find sqrt of a number if its a perfect square
 * @mid: sqrt of perfect_sqr
 * @perfect_sqr: a perfect square
 * Return: sqrt if perfect_sqr perfect square
 */

int find_sqrt(int mid, int perfect_sqr)
{
	if (mid > perfect_sqr)
		return (-1);
	if (mid * mid == perfect_sqr)
		return (mid);
	return (find_sqrt(mid + 1, perfect_sqr));
}
