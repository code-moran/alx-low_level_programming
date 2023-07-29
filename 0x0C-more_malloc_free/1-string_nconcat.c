#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @str: The input string
 *
 * Return: The length of the string (excluding the null byte)
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str && str[len])
		len++;

	return (len);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the newly allocated memory containing the concatenated
 *         string, or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *result;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	/* Adjust 'n' if it's greater or equal to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the result string */
	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	/* Copy s1 into the result string */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy the first 'n' bytes of s2 into the result string */
	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];

	/* Null-terminate the result string */
	result[i] = '\0';

	return (result);
}

