#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		while (a > 'z' && A <= 'Z')
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
