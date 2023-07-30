#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor of the number.
 */
unsigned long largest_prime_factor(unsigned long n)
{
	unsigned long largest = 2;
	unsigned long i;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	return (largest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long result = largest_prime_factor(number);

	printf("%lu\n", result);

	return (0);
}

