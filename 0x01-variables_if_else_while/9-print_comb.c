#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	/* Iterate through numbers 0 to 9 */
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');

		/* Print comma and space for all numbers except the last one */
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
