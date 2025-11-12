#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Prototype of the function that prints a dog */
void print_dog(struct dog *d);

#endif /* MAIN_H */

