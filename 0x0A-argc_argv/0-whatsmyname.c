#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	(void)argc; /* To silence the unused parameter warning */
	printf("%s\n", argv[0]);
	return (0);
}

