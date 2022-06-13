#include "main.h"

/**
 * swap_int - Swap values
 * @a: Pointer
 * @b: Pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
