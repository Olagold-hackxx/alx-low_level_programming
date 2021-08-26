#include <stdio.h>
/*
 * main - prints size of types
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu byte(s)", sizeof(a));
	printf("Size of an int: %zu byte(s)", sizeof(b));
	printf("Size of a long int: %zu byte(s)", sizeof(c));
	printf("Size of a long long int: %zu byte(s)", sizeof(d));
	printf("Size of a float: %zu byte(s)", sizeof(e));
	return (0);
}
