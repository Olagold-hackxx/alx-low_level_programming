#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned dec
 * @b: binary to be converted to decimal
 * Return: result of converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len, i, pow = 1;


	if (!b)
		return (0);/* return if b is NULL */
	for (len = 0; b[len] != '\0'; len++)
		;/* gets the length of b */
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			dec += pow;
		pow *= 2;
	}
	return (dec);
}
