#include <stdio.h>

/* Function to be executed before main */
void pre_main_function(void) __attribute__((constructor));

/* Function to be executed before main */
void pre_main_function(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

