#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int power = 1;
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;

	if (temp / 10 != 0)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + '0');
}

