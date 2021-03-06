#include "variadic_functions.h"
#include <string.h>
/**
 * print_char - print characters
 * @list: list of args
 * @sep: separator
 * Return: void
 */

void print_char(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_int - print integers
 * @list: list of args
 * @sep: separator
 * Return: void
 */

void print_int(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}

/**
 * print_float - print integers
 * @list: list of args
 * @sep: separator
 * Return: void
 */

void print_float(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_string - print integers
 * @list: list of args
 * @sep: separator
 * Return: void
 */

void print_string(va_list list, char *sep)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", sep, str);
}
/**
 * print_all - print all types of data
 * @format: data type
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list(list);
	char *sep;
	int i, j;
	all_f form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};


	va_start(list, format);
	sep = "";
	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (format[j] == *(form[i].det))
			{
				(form[i]).func(list, sep);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(list);
	printf("\n");
}
