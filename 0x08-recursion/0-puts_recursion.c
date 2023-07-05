#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed.
 *
 * Description: This function prints each character of the string @s.
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");	/* Print a new line when the end of string is reached */
		return;
	}

	printf("%c", *s);	/* Print the current character */
	_puts_recursion(s + 1);	/* Call the function recursively */
}
