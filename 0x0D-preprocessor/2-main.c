#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from.
 *
 * Return: (0) Always 0.
 */
int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}

