#include <stdio.h>

/**
 * main - print the sum of even fibonacci
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int i, j, k, n, sum;

	sum = 0;
	i = 0;
	j = 1;

	for (n = 0;; n++)
	{
		k = i + j;
		if (k < 4000000)
		{
			if ((k % 2) == 0)
			{
				sum = sum + k;
			}
		}
		else
		{
			break;
		}
		i = j;
		j = k;
	}
	printf("%lu\n", sum);
	return (0);
}
