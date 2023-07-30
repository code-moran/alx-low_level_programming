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

/* Function to initialize a struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Function to print a struct dog */
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
