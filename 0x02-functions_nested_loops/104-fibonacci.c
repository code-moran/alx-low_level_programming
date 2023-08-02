#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: (0) on successful completion.
 */
int main(void)
{
	int i;
	unsigned long a = 1, b = 2, c;

	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf("%lu", c);

		if (i < 97)
			printf(", ");

		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}

