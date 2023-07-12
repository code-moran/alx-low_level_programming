#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: Array of strings containing the command-line arguments
 *
 * Return: (0) on success, (1) on error
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument contains only digits */
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

