#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100. For multiples of 3, prints "Fizz".
 * For multiples of 5, prints "Buzz". For multiples of both 3 and 5, prints "FizzBuzz".
 * Each number or word is separated by a space. The output ends with a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("\n");
	return (0);
}

