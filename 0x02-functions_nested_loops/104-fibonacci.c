#include <stdio.h>

/**
 * main - print first 98 fibonacci series
 * Return: 0 on success
 */
int main(void)
{
	double i, j, k, n;

	i = 1;
	j = 1;

	printf("%.f", j);
	for (n = 1; n < 98; n++)
	{
		k = i + j;
		{
			printf(", %.f", k);
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
