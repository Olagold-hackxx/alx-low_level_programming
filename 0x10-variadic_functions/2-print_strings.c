#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings
 * @separator: comma
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
