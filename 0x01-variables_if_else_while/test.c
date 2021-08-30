#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 48;

	while (b <= 57 && a <= 56)
	{
		while (b == 57)
		{
			a == a + 1;
		}
		while (a <= b)
		{
			putchar(a);
			putchar(b);
		}
		putchar(',');
		putchar(' ');
		b++;
	}
	return (0);
}
