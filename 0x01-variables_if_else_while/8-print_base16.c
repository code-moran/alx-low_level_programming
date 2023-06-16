#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 (hexadecimal) in lowercase,.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	/* Print numbers 0 to 9 */
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	/* Print letters a to f */
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	
	putchar('\n');

	return (0);
}
