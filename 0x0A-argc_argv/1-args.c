#include <stdio.h>

/**
 * main - prints no of arguments
 * @argc: no of arguments
 * @argv: pointer to args
 * Return: 0 on success and 1 on failue
 */

int main(int argc, char *argv[])
{
	int i, count = 0;

	if (!*argv)
		return (-1);
	for (i = 0; i < argc - 1; i++)
		count++;
	printf("%d\n", count);
	return (0);
}
