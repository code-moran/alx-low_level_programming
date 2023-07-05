/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y, or -1 if an error occurs.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Error: Invalid input, return -1 */

	if (y == 0)
		return (1); /* Base case: any number raised to the power of 0 is 1 */

	return (x * _pow_recursion(x, y - 1)); /* Recursive call to calculate power */
}
