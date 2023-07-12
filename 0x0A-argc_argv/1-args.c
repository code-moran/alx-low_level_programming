#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: Array of strings containing the command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignoring the unused argv variable */

	printf("%d\n", argc - 1);
	return (0);
}

