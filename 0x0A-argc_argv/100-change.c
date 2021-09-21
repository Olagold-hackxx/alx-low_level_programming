#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum no of coins to make change
 * @argc: args count
 * @argv: array of pointer to args
 * Return: 0 on succes 1 otherwise
 */

int main(int argc, char *argv[])
{
	int amount, coins = 0;

	amount = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (amount >= 25)
	{
		amount -= 25;
		coins++;
	}
	while (amount >= 10 && amount < 25)
	{
		amount -= 10;
		coins++;
	}
	while (amount >= 5 && amount < 10)
	{
		amount -= 5;
		coins++;
	}
	while (amount >= 2 && amount < 5)
	{
		amount -= 2;
		coins++;
	}
	if (amount == 1)
	{
		amount -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}

