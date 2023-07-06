/**
 * wildcmp - Compares two strings and checks if they can be considered identical
 * @s1: First string
 * @s2: Second string (may contain the wildcard character *)
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* Both strings reached the end */
		return (1);

	if (*s2 == '*') /* Wildcard found */
	{
		if (*(s2 + 1) == '\0') /* Wildcard at the end matches remaining characters */
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2)) /* Skip current character in s1 */
			return (1);

		return (wildcmp(s1, s2 + 1)); /* Skip wildcard character */
	}

	if (*s1 == *s2) /* Characters match, continue to the next */
		return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* Characters don't match */
}
