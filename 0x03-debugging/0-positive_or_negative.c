#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and determines if it's positive,
 *              negative, or zero.
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	printf("%d ", i);
	if (i > 0)
		printf("is positive\n");
	else if (i == 0)
		printf("is zero\n");
	else
		printf("is negative\n");

}
