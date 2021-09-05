#include <stdio.h>

/**
 * main - print fibonacci
 * Return: 0 on success
 */

int main(void)
{
	int i, j, n;
	unsigned int k;

	i = 0;
	j = 1;

	for (n = 0; n <= 50; n++)
	{
		k = i + j;
		if (k == 1)
		{
			printf("%u", k);
		}
		else
		{
			printf(", %u", k);
		}
		i = j;
		j = k;
	}
	return (0);
}
