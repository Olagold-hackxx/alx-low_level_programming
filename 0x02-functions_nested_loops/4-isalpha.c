#inclide "main.h"
/**
 * _isalpha - prints alpha
 * @c: alpha to print
 * Return: 1 on success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

