#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0
 */
int main(void)
{
	int a = 48;
	char A = 'a';

	while (a <= 57)
	{
		while (a > 57 && A <= 'f')
		{
			putchar(A);
			A++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
