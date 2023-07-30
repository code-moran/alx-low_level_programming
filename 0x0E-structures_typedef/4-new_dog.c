#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly duplicated string, or NULL if failed.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the name of the owner.
 *
 * Return: Pointer to the newly created dog, or NULL if failed.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	/* Duplicate name and owner strings */
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}

