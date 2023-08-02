#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i;
	int j;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == b[j])
			{
				s[i] = c[j];
				break;
			}
		}
	}
	return (s);
}

