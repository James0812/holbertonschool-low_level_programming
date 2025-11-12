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
typedef struct dog 
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */

