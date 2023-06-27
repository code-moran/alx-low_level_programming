#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int length, i;
	char temp;

	/* Calculate the length of the string */
	length = 0;
	while (s[length] != '\0')
		length++;

	/* Swap characters from the start and end of the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
