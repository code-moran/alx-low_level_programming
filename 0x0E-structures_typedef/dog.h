#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Description: This structure holds information about a dog,
 *              such as its name, age, and owner's name.
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
