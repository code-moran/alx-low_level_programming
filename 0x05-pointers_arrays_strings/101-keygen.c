#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pwd[100];
	int i, sum, j;

	sum = 0;	

	srand(time(NULL));

	i = 0;

	while (i < 100)
	{
		pwd[i] = rand() % 78;
		sum += (pwd[i] + '0');
		putchar(pwd[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
		i++;
	}

	return (0);
}
