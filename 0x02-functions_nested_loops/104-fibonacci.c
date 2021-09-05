#include <stdio.h>

/**
 * main - print first 98 fibonacci series
 * Return: 0 on success
 */
int main(void)
{
	unsigned long long i, j, k, n;

	i = 1;
	j = 1;

	printf("%llu", j);
	for (n = 2; n <= 98; n++)
	{
		k = i + j;
		{
			printf(", %llu", k);
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
