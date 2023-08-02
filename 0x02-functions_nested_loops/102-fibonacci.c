#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long long int fib1 = 1, fib2 = 2, fib3;

	printf("%llu, %llu", fib1, fib2);

	for (count = 3; count <= 50; count++)
	{
		fib3 = fib1 + fib2;
		printf(", %llu", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return (0);
}

