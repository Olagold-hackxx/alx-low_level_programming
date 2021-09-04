#include <stdio.h>

/**
 * main - print sum of multiples of 3 and 5 in 1024
 * Return: 0 on success
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
