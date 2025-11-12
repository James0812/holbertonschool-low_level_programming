#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog's basic information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Structure to store information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif /* DOG_H */

