#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while(a < 100)
	{
		b = a % 10;
		c = b / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
