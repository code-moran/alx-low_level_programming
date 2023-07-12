#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total_len += len + 1; /* Add 1 for newline character */
	}

	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* Add newline character */
		k++;
	}

	str[k] = '\0'; /* Add null terminator */

	return (str);
}

