#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Recursive helper function to check if a palindrome
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
		return (0);

	len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
