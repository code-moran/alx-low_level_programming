#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib[3] = {1, 2, 0};
	unsigned long sum = 2;

	while (fib[2] <= 4000000)
	{
		fib[2] = fib[0] + fib[1];
		if (fib[2] % 2 == 0)
			sum += fib[2];
		fib[0] = fib[1];
		fib[1] = fib[2];
	}

	printf("%lu\n", sum);
	
	return (0);
}

