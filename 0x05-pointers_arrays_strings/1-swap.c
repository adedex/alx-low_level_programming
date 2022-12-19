#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * pointer points to both numbers
 * @a: pointer to the first number
 * @b: pointer to the second number to update
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
