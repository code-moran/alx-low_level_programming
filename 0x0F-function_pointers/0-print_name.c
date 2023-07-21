#include <stddef.h>

/**
 * print_name - Prints a name using a provided function.
 *
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that takes a char* argument.
 *
 * This function takes a name and a pointer to a function.
 */
void print_name(char *name, void (*f)(char *)) 
{
	if (name != NULL && f != NULL) 
	{
		f(name);
	}
}

