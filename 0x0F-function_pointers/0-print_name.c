#include <stddef.h>

/**
 * print_name - Prints a name using a provided function.
 *
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that takes a char* argument and returns void.
 *
 * This function takes a name and a pointer to a function as parameters. It
 * calls the function pointed by 'f' passing the 'name' as an argument to print
 * the name according to the implementation of the provided function 'f'.
 * If 'name' or 'f' is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *)) {
	if (name != NULL && f != NULL) {
		f(name);
	}
}

