#include <stdio.h>

#define MAX_DIGITS 1000

/**
 * add_arrays - Adds two arrays of digits and stores the result in res.
 *
 * @a: The first array of digits.
 * @b: The second array of digits.
 * @res: The array to store the result.
 */
void add_arrays(int a[], int b[], int res[])
{
	int carry = 0;
	int i;
	int sum;

	for (i = MAX_DIGITS - 1; i >= 0; i--)
	{
		sum = a[i] + b[i] + carry;
		res[i] = sum % 10;
		carry = sum / 10;
	}
}

/**
 * print_array - Prints an array of digits.
 *
 * @arr: The array of digits to print.
 */
void print_array(int arr[])
{
	int i = 0;
	while (i < MAX_DIGITS - 1 && arr[i] == 0)
		i++;

	for (; i < MAX_DIGITS; i++)
		printf("%d", arr[i]);
}

/**
 * main - Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: 0 on successful completion.
 */
int main(void)
{
	int i, j;
	int fib1[MAX_DIGITS] = {0};
	int fib2[MAX_DIGITS] = {0};
	int result[MAX_DIGITS] = {0};

	fib2[MAX_DIGITS - 1] = 1;

	printf("1");
	for (i = 2; i <= 98; i++)
	{
		add_arrays(fib1, fib2, result);
		printf(", ");
		print_array(result);

		for (j = 0; j < MAX_DIGITS; j++)
		{
			fib1[j] = fib2[j];
			fib2[j] = result[j];
		}
	}

	printf("\n");

	return (0);
}

