#include "main.h"
#include <stdio.h>

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");

    print_dog(&my_dog);

    return 0;
}

