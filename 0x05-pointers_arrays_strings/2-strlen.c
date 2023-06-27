#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	/* Initialize length variable */
	int length = 0;

	/* Iterate through the string until the null terminator is encountered */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
