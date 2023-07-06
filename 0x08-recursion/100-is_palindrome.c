#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len, i;

	if (s == NULL)
		return (0);

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}

	return (1);
}
