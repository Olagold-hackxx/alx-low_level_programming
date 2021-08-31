#include <unistd.h>

/**
 * _putchar - write to stdout
 * @c: character to write
 * Return: on Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
