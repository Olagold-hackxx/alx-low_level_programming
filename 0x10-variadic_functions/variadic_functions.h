#ifndef VARADIC_FUNCTIONS_H
#define VARADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print - struct that comtains data types
 *
 * @det: determine formats
 * @func: function to all formats
 */
typedef struct print
{
	char *det;
	void (*func)(va_list, char *);
} all_f;

#endif /* VARADIC_FUNCTIONS_H */
