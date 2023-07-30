#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type dog_t (struct dog).
 * @d: Pointer to the dog_t variable to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Return: None (void).
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

