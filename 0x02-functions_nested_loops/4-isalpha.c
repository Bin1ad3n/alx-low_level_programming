#include "main.h"

/**
 * _isalpha - Check is it is a letter or not
 * @c: Random character
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 &&  c < 123))
		return (1);
	else
		return (0);
}
