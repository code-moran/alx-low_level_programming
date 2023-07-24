#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int spaces;
	while (n > 0)
	{
		for (spaces = 0; spaces < (n - 1); spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}

