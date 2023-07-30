#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Description: This structure holds information about a dog,
 *
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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
