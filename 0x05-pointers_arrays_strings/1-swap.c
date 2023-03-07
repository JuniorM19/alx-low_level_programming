#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
