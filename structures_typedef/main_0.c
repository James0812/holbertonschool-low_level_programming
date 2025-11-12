#include <stdio.h>
#include "main.h"  /* Includes the dog structure and prototype */

/**
 * main - Tests the init_dog function
 *
 * Return: 0
 */
int main(void)
{
    struct dog my_dog;

    /* Initialize the dog structure */
    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");

    /* Print the values to verify */
    printf("Name: %s\n", my_dog.name);
    printf("Age: %.2f\n", my_dog.age);
    printf("Owner: %s\n", my_dog.owner);

    return (0);
}

