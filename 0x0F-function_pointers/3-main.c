#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs arithmetic operation
 * @argc: no of arguments
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *operator;
	int result;
	int (*op_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	if ((*operator ==  '%' || *operator == '/') && !atoi(argv[3]))
	{
		printf("Error\n");
		exit(100);
	}
	op_function = get_op_func(operator);
	if (op_function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_function(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
