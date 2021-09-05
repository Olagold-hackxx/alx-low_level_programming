#include <stdio.h>

/**
 * main - print fibonacci
 * Return: 0 on success
 */

int main(void)
{
	int i, j, n;
	unsigned long int k;

	i = 1;
	j = 1;

	printf("%d", j);
	for (n = 1; n <= 50; n++)
	{
		k = i + j;
		{
			printf(", %lu", k);
		}
		i = j;
		j = k;
	}
	putchar(' ');
	return (0);
}
