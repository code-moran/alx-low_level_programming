#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: Array of strings containing the command-line arguments
 *
 * Return: (0) on success or (1) on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the command-line arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform the multiplication */
	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}

