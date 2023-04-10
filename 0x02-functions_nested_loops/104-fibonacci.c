#include <stdio.h>
#define largediv 10000000000

/**
 * main - print first 98 fibonacci series
 * Return: 0 on success
 */

int main(void)
{
	unsigned long i, j, k, k2, n;
	unsigned long divI, divJ, modI, modJ;

	i = 1;
	j = 2;

	printf("%lu, %lu", i, j);
	for (n = 3; n <= 98; n++)
	{
		if (n == 92)
		{
			divI = i / largediv;
			modI = i % largediv;
			modJ = j % largediv;
			divJ = j / largediv;
			k = divJ + divI + ((modI + modJ) / largediv);
			k2 = (modJ + modI) % largediv;
			printf(", %lu%lu", k, k2);

		}
		else if (n > 92)
		{
			modI = modJ;
			divI = divJ;
			divJ = k;
			modJ = k2;
			k = divJ + divI + (modI + modJ) / largediv;
			k2 = (modJ + modI) % largediv;
			printf(", %lu%lu", k, k2);
		}
		else
		{
			k = i + j;
			printf(", %lu", k);
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
