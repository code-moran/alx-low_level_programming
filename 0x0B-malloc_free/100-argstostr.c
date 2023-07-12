#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;
	int newline_count = ac; /* Number of newlines to add */

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len;
	}

	/* Add space for newlines and null terminator */
	total_len += newline_count + 3; /* Add 2 for extra newlines and 1 for null terminator */

	str = malloc(total_len * sizeof(char));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}

		str[len] = '\n';
		len++;
	}

	str[len] = '\n'; /* Add the extra newline */
	len++;
	str[len] = '\0';

	return (str);
}

