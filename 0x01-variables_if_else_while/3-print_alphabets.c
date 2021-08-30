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
		putchar(a);
		a++;
		while (a > 'z' && A <= 'Z')
		{
			putchar(A);
			A++;
		}
	}
	putchar('\n');
	return (0);
}
