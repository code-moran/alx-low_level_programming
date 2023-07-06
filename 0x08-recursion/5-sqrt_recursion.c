#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n if it has a natural square root,
 *         -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: The current value to check for square root.
 *
 * Return: The square root of n if found, -1 if not found.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
