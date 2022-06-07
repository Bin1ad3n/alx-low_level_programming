#include "main.h"

/**
 * _islower - Check if letter is lowercase or not
 * @c: Random letter
 * Return: 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
