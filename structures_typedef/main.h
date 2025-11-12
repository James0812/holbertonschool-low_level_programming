#ifndef MAIN_H
#define MAIN_H

/* Structure definition */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MAIN_H */

