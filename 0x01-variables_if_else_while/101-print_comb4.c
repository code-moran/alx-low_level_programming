#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	/* Iterate through the first digit */
	for (digit1 = 0; digit1 < 8; digit1++)
	{
		/* Iterate through the second digit */
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			/* Iterate through the third digit */
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				/* Print comma and space for all combinations except the last one */
				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
