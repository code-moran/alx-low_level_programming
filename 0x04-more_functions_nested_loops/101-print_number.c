#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int num_digits = 0;
        int num_copy = n;
	int divisor = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (num_copy != 0)
	{
		num_copy /= 10;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}

