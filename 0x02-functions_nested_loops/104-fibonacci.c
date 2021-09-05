#include <stdio.h>

/**
 * main - print first 98 fibonacci series
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int i, j, k, n;

	i = 1;
	j = 2;

	printf("%lu, %lu", i, j);
	for (n = 3; n <= 98; n++)
	{
		k = i + j;
		{
			printf(", %lu", k);
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
