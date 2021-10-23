#include <stdarg.h>

/**
 * sum_them_all - varadic func to add args
 * @count: no of args
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
