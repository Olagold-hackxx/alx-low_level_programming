#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - varadic funcs to print numbers
 * @separator: comma to separate int
 * @n: number of ints
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;
	int *array;

	array = (int *)malloc(n * sizeof(int));

	va_start(ap, n);
	for (i = 0; i < n; i++)
		array[i] = va_arg(ap, int);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			if (separator == NULL)
				;
			else
			printf("%s", separator);
		}
		printf("%d", array[i]);
		if (i == (n - 1))
			printf("\n");
	}
}
