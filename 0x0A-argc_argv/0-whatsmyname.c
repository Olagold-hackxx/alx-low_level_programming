#include <stdio.h>

/**
 * main - prints program name
 * @argc: no of arguments
 * @argv: pointer to args
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}
