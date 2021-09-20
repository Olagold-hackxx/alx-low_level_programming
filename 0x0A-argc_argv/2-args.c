#include <stdio.h>

/**
 * main - prints command line arguments
 * @argc: no of args
 * @argv: pointer to args
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
