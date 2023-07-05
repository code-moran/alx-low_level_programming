/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number, or -1 if an error occurs.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);  /* Error: Invalid input, return -1 */

	if (n == 0)
		return (1);   /* Base case: factorial of 0 is 1 */

	return (n * factorial(n - 1));  /* Recursive call to calculate factorial */
}
