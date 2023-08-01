#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5] = {98, 402, 1989, 1024, 2021};
	int *p;

	p = &a[0];

	printf("a[2] = %d\n", *(p));

	return (0);
}

