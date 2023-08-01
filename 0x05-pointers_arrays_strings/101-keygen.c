#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates a random valid password
 * for the program 101-crackme
 *
 * Return: (0) on success
 */
int main(void)
{
	const char valid_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-={}[]|;:,.<>?";
	const int valid_chars_count = sizeof(valid_chars) - 1;
	int password_length = 12;	// Change this value to set the desired password length
	char password[password_length + 1];
	int i, random_index;

	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		random_index = rand() % valid_chars_count;
		password[i] = valid_chars[random_index];
	}

	password[password_length] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}

