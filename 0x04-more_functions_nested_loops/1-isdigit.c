#include "main.h"

/**
 * _isdigit - Checks for a number
 * @c: Random number
 * Return: 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
