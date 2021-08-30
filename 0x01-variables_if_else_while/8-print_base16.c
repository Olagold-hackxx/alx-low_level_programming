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
		putchar(a);
		a++;
		while (a > 57 && A <= 'f')
		{
			putchar(A);
			A++;
		}
	}
	putchar('\n');
	return (0);
}
