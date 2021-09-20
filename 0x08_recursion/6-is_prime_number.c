#include "main.h"

/**
 * is_prime_number - print prime numbers using recursion
 * @n: int to check if prime
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (check_prime(n, _sqrt_recursion(n)));
}

/**
 * check_prime - check for prime numbers
 * @n: int to check if prime
 * @divisor: divide to check if prime
 * Return: Return 1 if prime 0 if not
 */

int check_prime(int n, int divisor)
{
	if (n < 0)
		return (0);
	if (divisor < 2)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor - 1));
}

/**
 * _sqrt_recursion - print sqrt of perfect sqr
 * @n: int to check if perfect square
 * Return: sqrt of n if perfect square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)/* error */
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)/* base case */
		return (1);
	return (find_sqrt(1, n));
}
/**
 * find_sqrt - find square root of perfect square
 * @mid: sqrt of perfect_sqr
 * @perfect_sqr: check if perfect square
 * Return: sqrt if perfect square 0 if not
 */

int find_sqrt(int mid, int perfect_sqr)
{
	if (mid > perfect_sqr)
		return (-1);
	if (mid * mid == perfect_sqr)
		return (mid);
	return (find_sqrt(mid + 1, perfect_sqr));
}
