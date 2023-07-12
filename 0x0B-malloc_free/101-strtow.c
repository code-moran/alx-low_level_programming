#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str);
void free_words(char **words);

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: Pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;
		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			free_words(words);
			return (NULL);
		}
		word_len = 0;
		for (k = 0; k < len; k++)
		{
			words[j][k] = str[i + word_len];
			word_len++;
		}
		words[j][k] = '\0';
		j++;
		i += len;
	}

	words[j] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to be counted
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

/**
 * free_words - Frees the memory allocated for words array
 * @words: The array of words to be freed
 */
void free_words(char **words)
{
	int i;

	if (words == NULL)
		return;

	for (i = 0; words[i] != NULL; i++)
		free(words[i]);

	free(words);
}


