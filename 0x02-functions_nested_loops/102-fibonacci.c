#include <stdio.h>

/**
 * main - print fibonacci
 * Return: 0 on success
 */

int main(void)
{
	int i, j, k, n;

	i = 0;
	j = 1;

	for (n = 0; n <= 50; n++)
	{
		k = i + j;
		if (k == 1)
		{
			printf("%d", k)
		}
		else
		{
			printf(", %d", k);
		}
		i = j;
		j = k;
	}
	return (0);
}
