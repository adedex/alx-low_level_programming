#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	int largest_number;

	if (a > b && b > c)
	{
		largest_number = a;
	}
	else if (b > a && a > c)
	{
		largest_number = b;
	}
	else
	{
		largest_number = c;
	}
	printf("%d is the largest number\n", largest_number);

	return (0);
}

