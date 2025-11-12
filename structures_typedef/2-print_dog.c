#include <stdio.h>
#include <stddef.h>  // pour NULL

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

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

