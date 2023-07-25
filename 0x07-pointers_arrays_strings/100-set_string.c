#include <stdio.h>
#include <stdlib.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A double pointer to a char.
 * @to: A pointer to a char whose value will be set.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	if (s == NULL)
		return;

	*s = to;
}

