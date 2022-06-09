#include "main.h"

/**
 * print_diagonal - Print diagonal line
 * @n: Integer
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, c;

	c = 0;
	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
