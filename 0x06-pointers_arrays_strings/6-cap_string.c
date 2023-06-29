#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to be capitalized
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i, capitalize_next;

	capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}

		capitalize_next = 0;

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize_next = 1;
		}
	}

	return (str);
}
