#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int spaces, lines;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (lines = 0; lines < n; lines++)
	{
		for (spaces = 0; spaces < lines; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

