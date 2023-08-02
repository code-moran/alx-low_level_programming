#include <stdio.h>

/**
 * get_length - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int get_length(char *str)
{
	int length = 0;

	while (str[length])
		length++;
	return (length);
}

/**
 * reverse_string - Reverses a string.
 * @str: The input string.
 * @length: The length of the string.
 *
 * Return: void
 */
void reverse_string(char *str, int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = get_length(n1);
	int len2 = get_length(n2);
	int carry;
	int i, j, k;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		if (k < size_r - 1)
		{
			r[k++] = sum % 10 + '0';
			carry = sum / 10;
		}
		else
			return (0);
	}

	r[k] = '\0';
	reverse_string(r, k);

	return (r);
}

