#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

	return (0);
}