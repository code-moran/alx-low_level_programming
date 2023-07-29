#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply_strings - Multiply two positive numbers given as strings.
 * @num1: First number as a string.
 * @num2: Second number as a string.
 *
 * Return: Pointer to the result of multiplication as a string,
 *         or NULL on failure.
 */
char *multiply_strings(const char *num1, const char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len3 = len1 + len2;
	int i, j;
	char *result;
	char *multiplied;

	result = calloc(len3 + 1, sizeof(char));

	if (result == NULL)
	{
		perror("Memory allocation failed");
		return NULL;
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = (result[i + j + 1] - '0') + (n1 * n2) + carry;
			result[i + j + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}

		result[i] += carry;
	}

	/* Remove leading zeros */
	i = 0;
	while (result[i] == '0' && i < len3 - 1)
	{
		i++;
	}

	multiplied = strdup(result + i);

	free(result);
	return (multiplied);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of pointers to command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
        char *num2 = argv[2];

        char *result = multiply_strings(num1, num2);

	if (argc != 3)
	{
		printf("Usage: %s num1 num2\n", argv[0]);
		return (1);
	}

	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}

	return (0);
}

