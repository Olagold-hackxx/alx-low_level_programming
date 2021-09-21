#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * num_check - check if char is a number
 * @s: pointer to char
 * Return: 0 if a num -1 if not
 */

int num_check(char *s)
{
	size_t i;
	int num;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (-1);
		if (s[i] >= '0' || s[i] <= '9')
			num++;
	}
	return (num);
}
/**
 * main - add args
 * @argc: no of args
 * @argv: pointer to args
 * Return: 0 on success and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	for (i = 1; i < argc; i++)
	{
		num = num_check(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
