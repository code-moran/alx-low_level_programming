#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *input = str;
	char *output = str;
	int index;
	char *lowercase = "abcdefghijklmnopqrstuvwxyz";
	char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*input)
	{
		char ch = *input;

		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			char *base = (ch >= 'a' && ch <= 'z') ? lowercase : uppercase;

			index = (ch - base[0] + 13) % 26;
			ch = base[index];
		}

		*output = ch;
		input++;
		output++;
	}

	*output = '\0';
	return (str);
}

