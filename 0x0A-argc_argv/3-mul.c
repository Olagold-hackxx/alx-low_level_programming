#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply args
 * @argc: no of args
 * @argv: pointer to args
 * Return: 0 on succes 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, multiply = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		multiply *= atoi(argv[i]);
	printf("%d\n", multiply);
	return (0);
}
