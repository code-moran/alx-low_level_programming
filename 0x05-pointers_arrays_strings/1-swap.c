#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	/* Store the value of first integer in a temporary variable */
	int temp = *a;

	/* Assign the value of second integer to the first integer */
	*a = *b;

	/* Assign the value of temporary variable to the second integer */
	*b = temp;
}
