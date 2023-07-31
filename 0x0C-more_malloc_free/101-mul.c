#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The product as a string, or NULL if there's an error.
 */
char *multiply(const char *num1, const char *num2);

/**
 * check_digits - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int check_digits(const char *str);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the arguments.
 *
 * Return: Always 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!check_digits(num1) || !check_digits(num2))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The product as a string, or NULL if there's an error.
 */
char *multiply(const char *num1, const char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));
	int i;
	int index = 0;
	char *strResult;
	int j;
	int digit1;
	int digit2;
	int product;
	int sum;

	if (!result)
		return (NULL);

	/* Perform multiplication digit by digit */
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;

			sum = result[i + j + 1] + product;
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	/* Convert the result to a string */
	strResult = malloc((len + 1) * sizeof(char));

	if (!strResult)
	{
		free(result);
		return (NULL);
	}

	while (index < len && result[index] == 0)
		index++;

	if (index == len)
	{
		strResult[0] = '0';
		strResult[1] = '\0';
	}
	else
	{
		for (i = index; i < len; i++)
		{
			strResult[i - index] = result[i] + '0';
		}
		strResult[len - index] = '\0';
	}

	free(result);
	return (strResult);
}

/**
 * check_digits - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int check_digits(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}

