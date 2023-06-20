#include "main.h"

/**
 * times_table - Prints the 9-times table
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first digit */
		_putchar(',');

		for (column = 1; column <= 9; column++)
		{
			_putchar(' ');

			product = row * column;

			if (product <= 9)
			{
				_putchar(' '); /* Print leading space for single-digit numbers */
			}
			else
			{
				_putchar((product / 10) + '0'); /* Print the tens digit */
			}

			_putchar((product % 10) + '0'); /* Print the ones digit */

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
