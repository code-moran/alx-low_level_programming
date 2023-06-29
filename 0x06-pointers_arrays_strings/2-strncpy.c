#include "main.h"

/**
 * _strncpy - Copies a string up to a specified number of characters
 * @dest: Destination buffer to copy to
 * @src: Source string to copy from
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
