#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print based on last digit
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		printf("Last digit of %i is %i and is greater then 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %i is %i and is 0\n", n, x);
	else
		printf("Last digit of %i is %iand is less than 6 and not 0\n", n, x);

	return (0);
}
