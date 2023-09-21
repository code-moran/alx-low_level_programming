#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * before_main - Function executed before the main function.
 *
 * Description: This function is executed before the main function starts
 *
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
