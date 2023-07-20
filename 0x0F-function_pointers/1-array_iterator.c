#include <stddef.h>

/**
 * array_iterator - Executes a given function on each element of an integer array.
 *
 * @array: Pointer to the integer array.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Check if the input array or action function is NULL. */
	if (array == NULL || action == NULL)
		return;

	/* Loop through each element of the array and apply the action function on it. */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

