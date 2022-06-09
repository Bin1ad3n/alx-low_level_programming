#include "main.h"

/**
 * _isupper - Check for uppercase
 * @c: Integer
 * Return: 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
